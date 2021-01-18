//
// Created by paulf on 12/01/2021.
//

#include "../header/Attack.h"

int Attack::getIdAtk() const {
    return IdAtk;
}

void Attack::setIdAtk(int idAtk) {
    IdAtk = idAtk;
}

const std::__cxx11::basic_string<char> &Attack::getLabelle() const {
    return Labelle;
}

void Attack::setLabelle(const std::__cxx11::basic_string<char> &labelle) {
    Labelle = labelle;
}

int Attack::getStamCost() const {
    return StamCost;
}

void Attack::setStamCost(int stamCost) {
    StamCost = stamCost;
}

const Type &Attack::getType() const {
    return type;
}

void Attack::setType(const Type &type) {
    Attack::type = type;
}                                                primaryDefweaknesses,
                                                                                secondaryDefweaknesses) {}

Attack::Attack() {}

Attack::~Attack() {

}

Attack::Attack(int idType, const string &libelle, float primaryAtkadvantage, float secondaryAtkadvantage,
               float primaryDefweaknesses, float secondaryDefweaknesses, int idAtk, const string &labelle, int stamCost,
               const Type &type) : Type(idType, libelle, primaryAtkadvantage, secondaryAtkadvantage,
                                        primaryDefweaknesses, secondaryDefweaknesses), IdAtk(idAtk), Labelle(labelle),
                                   StamCost(stamCost), type(type) {}
