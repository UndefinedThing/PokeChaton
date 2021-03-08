//
// Created by paulf on 18/01/2021.
//

#include "../../header/Poke/PokeChat.h"
#include "../../header/Poke/Species.h"

void PokeChat::addPokeChat(int idPokeChat, const string &name, const Gender &gender, const vector<Type> &type, int lvl,
                           int health, int attaqueModifer, int defenceModifer, int spécialModifer, int vitesseModifer,
                           int precisinModifer, const Species &species, const vector<Attack> &atkList)
{
}

int PokeChat::getIdPokeChat() const
{
    return IdPokeChat;
}

void PokeChat::setIdPokeChat(int idPokeChat)
{
    IdPokeChat = idPokeChat;
}

const string &PokeChat::getName() const
{
    return name;
}

void PokeChat::setName(const string &name)
{
    PokeChat::name = name;
}

const Gender &PokeChat::getGender() const
{
    return gender;
}

void PokeChat::setGender(const Gender &gender)
{
    PokeChat::gender = gender;
}

const vector<Type> &PokeChat::getType() const
{
    return type;
}

void PokeChat::setType(const vector<Type> &type)
{
    PokeChat::type = type;
}

int PokeChat::getLvl() const
{
    return Lvl;
}

void PokeChat::setLvl(int lvl)
{
    Lvl = lvl;
}

int PokeChat::getHealth() const
{
    return Health;
}

void PokeChat::setHealth(int health)
{
    Health = health;
}

const vector<Attack> &PokeChat::getAtkList() const
{
    return AtkList;
}

void PokeChat::setAtkList(const vector<Attack> &atkList)
{
    AtkList = atkList;
}

int PokeChat::getAttaqueModifer() const
{
    return attaqueModifer;
}

void PokeChat::setAttaqueModifer(int attaqueModifer)
{
    PokeChat::attaqueModifer = attaqueModifer;
}

int PokeChat::getDefenceModifer() const
{
    return defenceModifer;
}

void PokeChat::setDefenceModifer(int defenceModifer)
{
    PokeChat::defenceModifer = defenceModifer;
}

int PokeChat::getSpécialModifer() const
{
    return spécialModifer;
}

void PokeChat::setSpécialModifer(int spécialModifer)
{
    PokeChat::spécialModifer = spécialModifer;
}

int PokeChat::getVitesseModifer() const
{
    return vitesseModifer;
}

void PokeChat::setVitesseModifer(int vitesseModifer)
{
    PokeChat::vitesseModifer = vitesseModifer;
}

int PokeChat::getPrecisinModifer() const
{
    return precisinModifer;
}

void PokeChat::setPrecisinModifer(int precisinModifer)
{
    PokeChat::precisinModifer = precisinModifer;
}

const Species &PokeChat::getSpecies() const
{
    return species;
}

void PokeChat::setSpecies(const Species &species)
{
    PokeChat::species = species;
}

PokeChat::PokeChat(int idPokeChat, const string &name, const Gender &gender, const vector<Type> &type, int lvl,
                   int health, int attaqueModifer, int defenceModifer, int spécialModifer, int vitesseModifer,
                   int precisinModifer, const Species &species, const vector<Attack> &atkList) : IdPokeChat(idPokeChat),
                                                                                                 name(name), gender(gender), type(type), Lvl(lvl), Health(health), attaqueModifer(attaqueModifer),
                                                                                                 defenceModifer(defenceModifer), spécialModifer(spécialModifer), vitesseModifer(vitesseModifer),
                                                                                                 precisinModifer(precisinModifer), species1(species1), AtkList(atkList) {}

PokeChat::PokeChat() {}
