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
    int Health;
    int attaqueModifer;
    int defenceModifer;
    int specialModifer;
    int vitesseModifer;
    int precisinModifer;
    Species species;
    vector<Attack> AtkList;

public:
    void AddPokemon(int idPokemon, const string &name, const Gender &gender, const vector<Type> &type, int lvl,
                          int health, int attaqueModifer, int defenceModifer, int specialModifer, int vitesseModifer,
                          int precisinModifer, const Species &species, const vector<Attack> &atkList);

    Pokemon();

    Pokemon(int idPokemon, const string &name, const Gender &gender, const vector<Type> &type, int lvl, int health,
            int attaqueModifer, int defenceModifer, int specialModifer, int vitesseModifer, int precisinModifer,
            const Species &species, const vector<Attack> &atkList);

    virtual ~Pokemon();

    int getAttaqueModifer() const;

    void setAttaqueModifer(int attaqueModifer);

    int getDefenceModifer() const;

    void setDefenceModifer(int defenceModifer);

    int getSpecialModifer() const;

    void setSpecialModifer(int specialModifer);

    int getVitesseModifer() const;

    void setVitesseModifer(int vitesseModifer);

    int getPrecisinModifer() const;

    void setPrecisinModifer(int precisinModifer);

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

    const Species &getSpecies() const;

    void setSpecies(const Species &species);

    const vector<Attack> &getAtkList() const;

    void setAtkList(const vector<Attack> &atkList);
};

#endif //POKECHATON_POKEMON_H
