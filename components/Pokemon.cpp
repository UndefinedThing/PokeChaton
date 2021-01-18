//
// Created by paulf on 12/01/2021.
//

#include "../header/Pokemon.h"

int Pokemon::getIdPokemon() const {
    return IdPokemon;
}

void Pokemon::setIdPokemon(int idPokemon) {
    IdPokemon = idPokemon;
}

const std::__cxx11::basic_string<char> &Pokemon::getName() const {
    return name;
}

void Pokemon::setName(const std::__cxx11::basic_string<char> &name) {
    Pokemon::name = name;
}

const Type &Pokemon::getType() const {
    return type;
}

void Pokemon::setType(const Type &type) {
    Pokemon::type = type;
}

int Pokemon::getLvl() const {
    return Lvl;
}

void Pokemon::setLvl(int lvl) {
    Lvl = lvl;
}

int Pokemon::getHealth() const {
    return Health;
}

void Pokemon::setHealth(int health) {
    Health = health;
}

int Pokemon::getStamina() const {
    return Stamina;
}

void Pokemon::setStamina(int stamina) {
    Stamina = stamina;
}

const std::__cxx11::basic_string<char> &Pokemon::getSpeaces() const {
    return Speaces;
}

void Pokemon::setSpeaces(const std::__cxx11::basic_string<char> &speaces) {
    Speaces = speaces;
}

const std::vector <Attack> &Pokemon::getAtkList() const {
    return AtkList;
}

void Pokemon::setAtkList(const std::vector <Attack> &atkList) {
    AtkList = atkList;
}

Pokemon::Pokemon() {}

Pokemon::Pokemon(int idType, const string &libelle, float primaryAtkadvantage, float secondaryAtkadvantage,
                 float primaryDefweaknesses, float secondaryDefweaknesses, int idPokemon, const string &name,
                 const Type &type, int lvl, int health, int stamina, const string &speaces,
                 const vector<Attack> &atkList) : Type(idType, libelle, primaryAtkadvantage, secondaryAtkadvantage,
                                                       primaryDefweaknesses, secondaryDefweaknesses),
                                                  IdPokemon(idPokemon), name(name), type(type), Lvl(lvl),
                                                  Health(health), Stamina(stamina), Speaces(speaces),
                                                  AtkList(atkList) {}

Pokemon::~Pokemon() {

}
