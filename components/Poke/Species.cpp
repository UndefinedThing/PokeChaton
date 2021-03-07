//
// Created by paulf on 18/01/2021.
//

#include "../../header/Poke/Species.h"
#include <iostream>
#include "../../header/main.h"

using namespace std;

void AddSpeacies (int _id, string _speciesName, vector<string> _typeSpecies, int _hp, int _attack, int _defense, int _special, int _speed, int _evolutions, int _legendary, int _Zone) {


    ifstream fichier("../components/db/FirstGenPokemon.csv", ios::in);

    string typeTest = "";
    string typeTest2 = "";

    if(fichier)  // si l'ouverture a réussi
    {

        while(fichier.good()){

            getline(fichier,_id,';');
            getline(fichier,_speciesName,';');
            getline(fichier,typeTest,';');
            _typeSpecies.push_back (typeTest);
            getline(fichier,typeTest2,';');
            _typeSpecies.push_back (typeTest2);
            getline(fichier,XpSpeed,';');
            getline(fichier,hp,';');
            getline(fichier,attack,';');
            getline(fichier,defense,';');
            getline(fichier,special,';');
            getline(fichier,speed,';');
            getline(fichier,evolutions,';');
            getline(fichier,legendary,';');

        }

        fichier.close();  // on ferme le fichier
    }
    else  // sinon
        cerr << "Impossible d'ouvrir le fichier !" << endl;


}


Species::Species() {}

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

Species::Species(int id, const string &speciesName, const vector<string> &typeSpecies, int hp, int attack, int defense,
                 int special, int speed, int evolutions, int legendary, int zone) : id(id), speciesName(speciesName),
                                                                                    TypeSpecies(typeSpecies), HP(hp),
                                                                                    Attack(attack), Defense(defense),
                                                                                    Special(special), Speed(speed),
                                                                                    Evolutions(evolutions),
                                                                                    Legendary(legendary), Zone(zone) {}



