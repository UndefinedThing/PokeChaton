//
// Created by paulf on 12/01/2021.
//

#include "../header/Type.h"

int Type::getIdType() const {
    return IdType;
}

void Type::setIdType(int idType) {
    IdType = idType;
}

const std::__cxx11::basic_string<char> &Type::getLibelle() const {
    return libelle;
}

void Type::setLibelle(const std::__cxx11::basic_string<char> &libelle) {
    Type::libelle = libelle;
}

float Type::getPrimaryAtkadvantage() const {
    return PrimaryAtkadvantage;
}

void Type::setPrimaryAtkadvantage(float primaryAtkadvantage) {
    PrimaryAtkadvantage = primaryAtkadvantage;
}

float Type::getSecondaryAtkadvantage() const {
    return SecondaryAtkadvantage;
}

void Type::setSecondaryAtkadvantage(float secondaryAtkadvantage) {
    SecondaryAtkadvantage = secondaryAtkadvantage;
}

float Type::getPrimaryDefweaknesses() const {
    return PrimaryDefweaknesses;
}

void Type::setPrimaryDefweaknesses(float primaryDefweaknesses) {
    PrimaryDefweaknesses = primaryDefweaknesses;
}

float Type::getSecondaryDefweaknesses() const {
    return SecondaryDefweaknesses;
}

void Type::setSecondaryDefweaknesses(float secondaryDefweaknesses) {
    SecondaryDefweaknesses = secondaryDefweaknesses;
}

Type::Type() {}

Type::Type(int idType, const string &libelle, float primaryAtkadvantage, float secondaryAtkadvantage,
           float primaryDefweaknesses, float secondaryDefweaknesses) : IdType(idType), libelle(libelle),
                                                                       PrimaryAtkadvantage(primaryAtkadvantage),
                                                                       SecondaryAtkadvantage(secondaryAtkadvantage),
                                                                       PrimaryDefweaknesses(primaryDefweaknesses),
                                                                       SecondaryDefweaknesses(secondaryDefweaknesses) {}

Type::~Type() {

}
