//
// Created by paulf on 18/01/2021.
//

#include "../../header/Poke/Pokemon.h"
#include "../../header/Poke/Species.h"

void AddPokemon(int idPokemon, const string &name, const Gender &gender, const vector<Type> &type, int lvl,
                           int health, int attaqueModifer, int defenceModifer, int specialModifer, int vitesseModifer,
                           int precisinModifer, const Species &species, const vector<Attack> &atkList)
{
}

int Pokemon::getIdPokemon() const
{
    return IdPokemon;
}

void Pokemon::setIdPokemon(int idPokemon)
{
    IdPokemon = idPokemon;
}

const string &PokeChat::getName() const
{
    return name;
}

void Pokemon::setName(const string &name)
{
    Pokemon::name = name;
}

const Gender &PokeChat::getGender() const
{
    return gender;
}

void Pokemon::setGender(const Gender &gender)
{
    Pokemon::gender = gender;
}

const vector<Type> &Pokemon::getType() const
{
    return type;
}

void Pokemon::setType(const vector<Type> &type)
{
    Pokemon::type = type;
}

int Pokemon::getLvl() const
{
    return Lvl;
}

void Pokemon::setLvl(int lvl)
{
    Lvl = lvl;
}

int Pokemon::getHealth() const
{
    return Health;
}

void Pokemon::setHealth(int health)
{
    Health = health;
}

const vector<Attack> &Pokemon::getAtkList() const
{
    return AtkList;
}

void Pokemon::setAtkList(const vector<Attack> &atkList)
{
    AtkList = atkList;
}

int PokeChat::getAttaqueModifer() const
{
    return attaqueModifer;
}

void Pokemon::setAttaqueModifer(int attaqueModifer)
{
    Pokemon::attaqueModifer = attaqueModifer;
}

int Pokemon::getDefenceModifer() const
{
    return defenceModifer;
}

void Pokemon::setDefenceModifer(int defenceModifer)
{
    Pokemon::defenceModifer = defenceModifer;
}

int Pokemon::getSpecialModifer() const
{
    return specialModifer;
}

void Pokemon::setSpecialModifer(int specialModifer)
{
    Pokemon::specialModifer = specialModifer;
}

int Pokemon::getVitesseModifer() const
{
    return vitesseModifer;
}

void Pokemon::setVitesseModifer(int vitesseModifer)
{
    Pokemon::vitesseModifer = vitesseModifer;
}

int Pokemon::getPrecisinModifer() const
{
    return precisinModifer;
}

void Pokemon::setPrecisinModifer(int precisinModifer)
{
    Pokemon::precisinModifer = precisinModifer;
}

const Species &Pokemon::getSpecies() const
{
    return species;
}

void Pokemon::setSpecies(const Species &species)
{
    Pokemon::species = species;
}

PokeChat::Pokemon(int idPokemon, const string &name, const Gender &gender, const vector<Type> &type, int lvl,
                   int health, int attaqueModifer, int defenceModifer, int specialModifer, int vitesseModifer,
                   int precisinModifer, const Species &species, const vector<Attack> &atkList) : IdPokemon(idPokemon),
                                                                                                 name(name), gender(gender), type(type), Lvl(lvl), Health(health), attaqueModifer(attaqueModifer),
                                                                                                 defenceModifer(defenceModifer), specialModifer(specialModifer), vitesseModifer(vitesseModifer),
                                                                                                 precisinModifer(precisinModifer), species(species), AtkList(atkList) {}

PokeChat::PokeChat() {}
