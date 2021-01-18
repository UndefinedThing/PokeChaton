//
// Created by paulf on 12/01/2021.
//

#ifndef POKEMONLINE_GENDER_H
#define POKEMONLINE_GENDER_H

class Gender{
private:
    int id;
    int libelle;

public:

    Gender();

    Gender(int id, int libelle);

    virtual ~Gender();

    int getId() const;

    void setId(int id);

    int getLibelle() const;

    void setLibelle(int libelle);


};


#endif //POKEMONLINE_GENDER_H
