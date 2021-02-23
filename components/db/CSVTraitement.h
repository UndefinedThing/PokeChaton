//
// Created by paulf on 23/02/2021.
//

#ifndef POKECHATON_CSVTRAITEMENT_H
#define POKECHATON_CSVTRAITEMENT_H


#include <functional>

using namespace std;

class CSVTraitement{

    bool is_separator(char c);
    bool is_new_line(char c);
    bool is_double_quote(char c);
    bool is_start_comment(char c);

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




};

#endif //POKECHATON_CSVTRAITEMENT_H
