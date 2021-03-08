//
// Created by paulf on 12/01/2021.
//

#ifndef POKEMONLINE_TYPE_H
#define POKEMONLINE_TYPE_H

#include <iostream>
#include "main.h"

using namespace std;

class Type{
private:
    int IdType;
    string libelle;


public:

    Type();

    Type(int idType, const string &libelle, float primaryAtkadvantage, float secondaryAtkadvantage,
         float primaryDefweaknesses, float secondaryDefweaknesses);

    virtual ~Type();


    int getIdType() const;

    void setIdType(int idType);

    const string &getLibelle() const;

    void setLibelle(const string &libelle);



};

#endif //POKEMONLINE_TYPE_H
