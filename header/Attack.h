//
// Created by paulf on 12/01/2021.
//

#ifndef POKEMONLINE_ATTACK_H
#define POKEMONLINE_ATTACK_H


#include <iostream>
#include "main.h"
#include "Type.h"

using namespace std;

class Attack{
private:
    int IdAtk;
    string Labelle;
    int StamCost;
    Type type;
public:



    Attack();

    Attack(int idType, const string &libelle, float primaryAtkadvantage, float secondaryAtkadvantage,
           float primaryDefweaknesses, float secondaryDefweaknesses, int idAtk, const string &labelle, int stamCost,
           const Type &type);

    virtual ~Attack();

    int getIdAtk() const;

    void setIdAtk(int idAtk);

    const string &getLabelle() const;

    void setLabelle(const string &labelle);

    int getStamCost() const;

    void setStamCost(int stamCost);

    const Type &getType() const;

    void setType(const Type &type);


};

#endif //POKEMONLINE_ATTACK_H
