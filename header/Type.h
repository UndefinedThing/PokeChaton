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
    float PrimaryAtkadvantage;
    float SecondaryAtkadvantage;
    float PrimaryDefweaknesses;
    float SecondaryDefweaknesses;

public:


    Type();

    Type(int idType, const string &libelle, float primaryAtkadvantage, float secondaryAtkadvantage,
         float primaryDefweaknesses, float secondaryDefweaknesses);

    virtual ~Type();


    int getIdType() const;

    void setIdType(int idType);

    const string &getLibelle() const;

    void setLibelle(const string &libelle);

    float getPrimaryAtkadvantage() const;

    void setPrimaryAtkadvantage(float primaryAtkadvantage);

    float getSecondaryAtkadvantage() const;

    void setSecondaryAtkadvantage(float secondaryAtkadvantage);

    float getPrimaryDefweaknesses() const;

    void setPrimaryDefweaknesses(float primaryDefweaknesses);

    float getSecondaryDefweaknesses() const;

    void setSecondaryDefweaknesses(float secondaryDefweaknesses);

};

#endif //POKEMONLINE_TYPE_H
