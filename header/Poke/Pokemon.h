//
// Created by paulf on 18/01/2021.
//

#ifndef POKECHATON_POKEMON_H
#define POKECHATON_POKEMON_H


#include "../main.h"
#include "../Attack.h"
#include "Species.h"
#include <iostream>
using namespace std;

class Pokemon
{
private:
    int idPokemon;
    string name;
    Gender gender;
    vector<Type> type;
    int Lvl;
    int health;
    int healthMax;
    int attackModifier;
    int defenceModifier;
    int specialModifier;
    int speedModifier;
    int precisionModifier;
    Species species;
    vector<Attack> AtkList;

public:

    Pokemon();

    Pokemon(int idPokemon, const string &name, const Gender &gender, const vector<Type> &type, int lvl, int health,
            int healthMax, int attackModifier, int defenceModifier, int specialModifier, int speedModifier,
            int precisionModifier, const Species &species, const vector<Attack> &atkList);

    virtual ~Pokemon();

    bool is_capture(Pokemon pokemon);

    bool capture(Pokemon pokemon, vector<Pokemon> &team, vector<Pokemon> &box);


    int getIdPokemon() const;

    void setIdPokemon(int idPokemon);

    const string &getName() const;

    void setName(const string &name);

    const Gender &getGender() const;

    void setGender(const Gender &gender);

    const vector<Type> &getType() const;

    void setType(const vector<Type> &type);

    int getLvl() const;

    void setLvl(int lvl);

    int getHealth() const;

    void setHealth(int health);

    int getHealthMax() const;

    void setHealthMax(int healthMax);

    int getAttackModifier() const;

    void setAttackModifier(int attackModifier);

    int getDefenceModifier() const;

    void setDefenceModifier(int defenceModifier);

    int getSpecialModifier() const;

    void setSpecialModifier(int specialModifier);

    int getSpeedModifier() const;

    void setSpeedModifier(int speedModifier);

    int getPrecisionModifier() const;

    void setPrecisionModifier(int precisionModifier);

    const Species &getSpecies() const;

    void setSpecies(const Species &species);

    const vector<Attack> &getAtkList() const;

    void setAtkList(const vector<Attack> &atkList);


};

#endif //POKECHATON_POKEMON_H
