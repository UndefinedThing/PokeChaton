//
// Created by paulf on 18/01/2021.
//

#include "../../header/Poke/Speace.h"
#include <iostream>
#include "../../header/main.h"

using namespace std;

void AddSpeace(int id, const string &speaceName, int lvlEvo, int attaque, int defence, int spécial, int vitesse,int precisin){

}

int Speace::getId() const {
    return id;
}

void Speace::setId(int id) {
    Speace::id = id;
}

const string &Speace::getSpeaceName() const {
    return SpeaceName;
}

void Speace::setSpeaceName(const string &speaceName) {
    SpeaceName = speaceName;
}

int Speace::getId() const {
    return id;
}

void Speace::setId(int id) {
    Speace::id = id;
}

const string &Speace::getSpeaceName() const {
    return SpeaceName;
}

void Speace::setSpeaceName(const string &speaceName) {
    SpeaceName = speaceName;
}

int Speace::getLvlEvo() const {
    return lvlEvo;
}

void Speace::setLvlEvo(int lvlEvo) {
    Speace::lvlEvo = lvlEvo;
}

int Speace::getAttaque() const {
    return attaque;
}

void Speace::setAttaque(int attaque) {
    Speace::attaque = attaque;
}

int Speace::getDefence() const {
    return defence;
}

void Speace::setDefence(int defence) {
    Speace::defence = defence;
}

int Speace::getSpécial() const {
    return spécial;
}

void Speace::setSpécial(int spécial) {
    Speace::spécial = spécial;
}

int Speace::getVitesse() const {
    return vitesse;
}

void Speace::setVitesse(int vitesse) {
    Speace::vitesse = vitesse;
}

int Speace::getPrecisin() const {
    return precisin;
}

void Speace::setPrecisin(int precisin) {
    Speace::precisin = precisin;
}

Speace::Speace() {}

Speace::Speace(int id, const string &speaceName, int lvlEvo, int attaque, int defence, int spécial, int vitesse,
               int precisin) : id(id), SpeaceName(speaceName), lvlEvo(lvlEvo), attaque(attaque), defence(defence),
                               spécial(spécial), vitesse(vitesse), precisin(precisin) {}

Speace::~Speace() {

}
