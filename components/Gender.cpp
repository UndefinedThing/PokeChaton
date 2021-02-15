//
// Created by paulf on 12/01/2021.
//

#include "../header/Gender.h"

int Gender::getId() const {
    return id;
}

void Gender::setId(int id) {
    Gender::id = id;
}

string Gender::getLibelle() const {
    return libelle;
}

void Gender::setLibelle(string libelle) {
    Gender::libelle = libelle;
}

Gender::Gender() {}

Gender::Gender(int id, string libelle) : id(id), libelle(libelle) {}

Gender::~Gender() {

}

