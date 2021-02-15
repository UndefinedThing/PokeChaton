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


Type::Type(int idType, const string &libelle, float primaryAtkadvantage, float secondaryAtkadvantage,
           float primaryDefweaknesses, float secondaryDefweaknesses) : IdType(idType), libelle(libelle),
                                                                       PrimaryAtkadvantage(primaryAtkadvantage),
                                                                       SecondaryAtkadvantage(secondaryAtkadvantage),
                                                                       PrimaryDefweaknesses(primaryDefweaknesses),
                                                                       SecondaryDefweaknesses(secondaryDefweaknesses) {}

Type::~Type() {

}
