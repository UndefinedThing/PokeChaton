//
// Created by paulf on 18/01/2021.
//

#ifndef POKECHATON_SPECIES_H
#define POKECHATON_SPECIES_H



#include <iostream>
#include "../main.h"
#include "../Attack.h"
#include<fstream>


using namespace std;

class Species {
private:
    int id;
    string speciesName;
    std::vector<string> TypeSpecies;
    string XpSpeed;
    int HP;
    int Attack;
    int Defense;
    int Special;
    int Speed;
    int Evolutions;
    int Legendary;
    int Zone;



public:

    Species();

    Species(int id, const string &speciesName, const vector<string> &typeSpecies, const string &xpSpeed, int hp,
            int attack, int defense, int special, int speed, int evolutions, int legendary, int zone);

    virtual ~Species();

    int getId() const;

    void setId(int id);

    const string &getSpeciesName() const;

    void setSpeciesName(const string &speciesName);

    const vector<string> &getTypeSpecies() const;

    void setTypeSpecies(const vector<string> &typeSpecies);

    const string &getXpSpeed() const;

    void setXpSpeed(const string &xpSpeed);

    int getHp() const;

    void setHp(int hp);

    int getAttack() const;

    void setAttack(int attack);

    int getDefense() const;

    void setDefense(int defense);

    int getSpecial() const;

    void setSpecial(int special);

    int getSpeed() const;

    void setSpeed(int speed);

    int getEvolutions() const;

    void setEvolutions(int evolutions);

    int getLegendary() const;

    void setLegendary(int legendary);

    int getZone() const;

    void setZone(int zone);

};

#endif //POKECHATON_SPECIES_H
