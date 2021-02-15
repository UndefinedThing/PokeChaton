//
// Created by paulf on 12/01/2021.
//

#ifndef POKEMONLINE_GENDER_H
#define POKEMONLINE_GENDER_H

#include <iostream>
#include "main.h"
#include "Attack.h"

using namespace std;


class Gender{
private:
    int id;
    string libelle;

public:

    Gender();

    Gender(int id, int libelle);

    virtual ~Gender();

    int getId() const;

    void setId(int id);

    string getLibelle() const;

    void setLibelle(string libelle);


};


#endif //POKEMONLINE_GENDER_H
