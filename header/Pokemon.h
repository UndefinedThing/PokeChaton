//
// Created by paulf on 12/01/2021.
//

#ifndef POKEMONLINE_POKEMON_H
#define POKEMONLINE_POKEMON_H


#include <iostream>
#include "main.h"
#include "Attack.h"

using namespace std;


class Pokemon: public Type{
private:
    int IdPokemon;
    string name;
    Type type;
    int Lvl;
    int Health;
    int Stamina;
    string Speaces;
    vector<Attack> AtkList;

public:


    Pokemon();

    Pokemon(int idType, const string &libelle, float primaryAtkadvantage, float secondaryAtkadvantage,
            float primaryDefweaknesses, float secondaryDefweaknesses, int idPokemon, const string &name,
            const Type &type, int lvl, int health, int stamina, const string &speaces, const vector<Attack> &atkList);

    virtual ~Pokemon();


    int getIdPokemon() const;

    void setIdPokemon(int idPokemon);

    const string &getName() const;

    void setName(const string &name);

    const Type &getType() const;

    void setType(const Type &type);

    int getLvl() const;

    void setLvl(int lvl);

    int getHealth() const;

    void setHealth(int health);

    int getStamina() const;

    void setStamina(int stamina);

    const string &getSpeaces() const;

    void setSpeaces(const string &speaces);

    const vector<Attack> &getAtkList() const;

    void setAtkList(const vector<Attack> &atkList);


};

#endif //POKEMONLINE_POKEMON_H
