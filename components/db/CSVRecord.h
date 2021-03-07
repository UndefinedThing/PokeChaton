//
// Created by paulf on 23/02/2021.
//

#ifndef POKECHATON_CSVRECORD_H
#define POKECHATON_CSVRECORD_H

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

#endif //POKECHATON_CSVRECORD_H
