
enum class csv_parser_state {
    initial,
    comment,
    record,
    quoted_record,
    quote_quoted_record,
    new_line,
    between_records
};

enum class csv_error {
    no_error = 0 /* pour pouvoir stocker ensemble l'erreur et l'absence d'erreur */,
    error_other,
    error_user_aborted,
    error_malformed_quoted_string,
    error_unterminated_quoted_string,
    error_empty_file
};

typedef std::string string_type; // Pour pouvoir le changer plus facilement
std::function<bool(string_type const &)> comment_handler;
std::function<bool(string_type const &)> field_handler;
std::function<bool()> end_line_handler;
std::function<bool()> end_file_handler;
std::function<void(csv_error,int,int)> error_handler;

void truncate(string_type & s) { s.clear(); }
void append(string_type& s, char c) { s.push_back(c); }

void call_field_handler();
void call_end_line_handler();
void call_comment_handler();
void call_error_handler(csv_error err);
void update_line_counter();



void csv_parser::consume(char c)
{
    current_pos_ += 1;
    switch(state_)
    {
        case initial:
        case new_line:
        {
            if(is_separator(c))
            {
                call_field_handler();
                state_ = state::between_records;
            }
            else if(is_double_quote(c))
                state_ = state::quoted_record;
            else if(is_start_comment(c))
                state_ = state::comment;
            else if(is_new_line(c))
            {
                call_end_line_handler();
                state_ = state::new_line;
            }
            else
            {
                last_value_.push_back(c);
                state_ = state::record;
            }
            break;
        }
        case state::record
                    {
                            if(is_separator(c))
                            {
                                call_field_handler();
                                state_ = state::between_records;
                            }
                            else if(csvis_new_line(c))
                            {
                                call_field_handler();
                                call_end_line_handler();
                                state_ = state::new_line;
                            }
                            else
                            last_value_.push_back(c);
                            break;
                    }
        case state::quoted_record:
        {
            if(is_double_quote(c))
                state_ = state::quote_quoted_record;
            else
            {
                if(is_new_line(c))
                    update_line_counter();
                last_value_.push_back(c);
            }
            break;
        }
        case state::quote_quoted_record:
        {
            case state::quote_quoted_record:
            {
                if(is_separator(c))
                {
                    call_field_handler();
                    state_ = state::between_records;
                }
                else if(is_double_quote(c))
                {
                    last_value_.push_back(c);
                    state_ = state::quoted_record;
                }
                else if(is_new_line(c))
                {
                    call_field_handler();
                    call_end_line_handler();
                    state_ = state::new_line;
                }
                else
                    call_error_handler(csv_error::malformed_quoted_string);
                break;
            }

        }
        case state::between_records:
        {
            if(is_separator(c))
            {
                call_field_handler();
                state_ = state::between_records;
            }
            else if(is_double_quote(c))
                state_ = state::quoted_record;
            else if(is_new_line(c))
            {
                call_field_handler();
                call_end_line_handler();
                state_ = state::new_line;
            }
            else
            {
                last_value_.push_back(c);
                state_ = state::record;
            }
            break;
        }
        case state::comment:
        {
            if(is_new_line(c))
            {
                call_comment_handler();
                state_ = state::new_line;
                update_line_counter();
            }
            else
                csv_traits::append(last_value_, c);
            break;
        }
    }
}


void csv_parser::end_of_data()
{
    switch(state_)
    {
        case state::quote_quoted_record:
        case state::record:
        case state::between_records:
            call_field_handler();
            call_end_line_handler();
            break;
        case state::quoted_record:
            call_error_handler(csv_error::unterminated_quoted_string);
            break;
        case state::new_line:
            break;
        case state::comment:
            call_comment_handler();
            break;
        case state::initial:
            call_error_handler(csv_error::error_empty_file);
            break;
    }
    if(end_file_handler && error_ == csv_error::no_error)
    {
        if(!end_file_handler())
            error_ = csv_error::error_user_aborted;
    }
}


class CSVRecord {
    friend class csv_data; // csv_data a un accès privilégié aux données de cette classe,
    // c'est elle qui l'initialise
    csv_data const& owner_;
    std::vector<std::string> fields_;
public:
    csv_record(csv_data const& owner) : owner_(owner) {}
    typedef std::vector<std::string>::const_iterator const_iterator;
    const_iterator begin() const;
    const_iterator end() const;
    std::string const& operator[](size_t i) const;
    boost::optional<std::string const&> operator[](std::string const& header) const;
    size_t size() const;
};