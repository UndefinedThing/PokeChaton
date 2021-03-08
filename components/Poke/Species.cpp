//
// Created by paulf on 18/01/2021.
//

#include "../../header/Poke/Species.h"
#include <iostream>
#include "../../header/main.h"

using namespace std;

Species() {

    ifstream MyFiles("../components/db/FirstGenPokemon.csv", ios::in);

    struct Species_Struct ()
    {
        int _id;
        string _speciesName;
        vector<string> _typeSpecies;
        string _XpSpeed;
        int _hp;
        int _attack;
        int _defense;
        int _special;
        int _speed;
        int _evolution;
        int _legendary;
        int _zone;
    };

    struct Species_Struct _species;

    string strId;
    string strHp;
    string typeTest;
    string typeTest2;
    string strAttack;
    string strDefense;
    string strSpecial;
    string strSpeed;
    string strEvolution;
    string strLegendary;
    string strZone;

    if (MyFiles) // si l'ouverture a réussi
    {
        while (MyFiles.good()) {
            getline(MyFiles, strId, ';');
            getline(MyFiles, _species._speciesName, ';');
            getline(MyFiles, typeTest, ';');
            _species._typeSpecies.push_back(typeTest);
            getline(MyFiles, typeTest2, ';');
            _species._typeSpecies.push_back(typeTest2);
            getline(MyFiles, _species._XpSpeed, ';');
            getline(MyFiles, strHp, ';');
            getline(MyFiles, strAttack, ';');
            getline(MyFiles, strDefense, ';');
            getline(MyFiles, strSpecial, ';');
            getline(MyFiles, strSpeed, ';');
            getline(MyFiles, strEvolution, ';');
            getline(MyFiles, strLegendary, ';');
            getline(MyFiles, strZone, ';');

            _species._id = stoi(strId);
            _species._hp = stoi(strHp);
            _species._attack = stoi(strAttack);
            _species._defense = stoi(strDefense);
            _species._special = stoi(strSpecial);
            _species._speed = stoi(strSpeed);
            _species._evolution = stoi(strEvolution);
            _species._legendary = stoi(strLegendary);
            _species._zone = stoi(strZone);
        }

        MyFiles.close(); // on ferme le fichier
    } else {
        // sinon
        cerr << "Impossible d'ouvrir le fichier !" << endl;
    }

    return _species;
}

//Species() {}

int Species::getId() const {
    return id;
}

void Species::setId(int id) {
    Species::id = id;
}

const string &Species::getSpeciesName() const {
    return speciesName;
}

void Species::setSpeciesName(const string &speciesName) {
    Species::speciesName = speciesName;
}

const vector<string> &Species::getTypeSpecies() const {
    return TypeSpecies;
}

void Species::setTypeSpecies(const vector<string> &typeSpecies) {
    TypeSpecies = typeSpecies;
}

int Species::getAttack() const {
    return Attack;
}

void Species::setAttack(int attack) {
    Attack = attack;
}

int Species::getDefense() const {
    return Defense;
}

void Species::setDefense(int defense) {
    Defense = defense;
}

int Species::getSpecial() const {
    return Special;
}

void Species::setSpecial(int special) {
    Special = special;
}

int Species::getSpeed() const {
    return Speed;
}

void Species::setSpeed(int speed) {
    Speed = speed;
}

int Species::getEvolutions() const {
    return Evolutions;
}

void Species::setEvolutions(int evolutions) {
    Evolutions = evolutions;
}

int Species::getLegendary() const {
    return Legendary;
}

void Species::setLegendary(int legendary) {
    Legendary = legendary;
}

int Species::getHp() const {
    return HP;
}

void Species::setHp(int hp) {
    HP = hp;
}

int Species::getZone() const {
    return Zone;
}

void Species::setZone(int zone) {
    Zone = zone;
}

const string &Species::getXpSpeed() const {
    return XpSpeed;
}

void Species::setXpSpeed(const string &xpSpeed) {
    XpSpeed = xpSpeed;
}

Species::Species(int id, const string &speciesName, const vector<string> &typeSpecies, const string XpSpeed, int hp,
                 int attack, int defense,
                 int special, int speed, int evolutions, int legendary, int zone) : id(id), speciesName(speciesName),
                                                                                    TypeSpecies(typeSpecies),
                                                                                    XpSpeed(XpSpeed), HP(hp),
                                                                                    Attack(attack), Defense(defense),
                                                                                    Special(special), Speed(speed),
                                                                                    Evolutions(evolutions),
                                                                                    Legendary(legendary), Zone(zone) {}

