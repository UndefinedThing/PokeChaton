//
// Created by paulf on 12/01/2021.
//

#include <string>
#include "../header/Trainer.h"

const std::__cxx11::basic_string<char> &Trainer::getName() const {
    return name;
}

void Trainer::setName(const std::__cxx11::basic_string<char> &name) {
    Trainer::name = name;
}

const Gender &Trainer::getGender() const {
    return gender;
}

void Trainer::setGender(const Gender &gender) {
    Trainer::gender = gender;
}

int Trainer::getAge() const {
    return age;
}

void Trainer::setAge(int age) {
    Trainer::age = age;
}

const vector <Pokemon> &Trainer::getBelt() const {
    return belt;
}

void Trainer::setBelt(const vector <PokeChat> &belt) {
    Trainer::belt = belt;
}

Trainer::Trainer() {}

Trainer::Trainer(int id, int libelle, const string &name, const Gender &gender, int age, const vector<PokeChat> &belt)
        : Gender(id, libelle), name(name), gender(gender), age(age), belt(belt) {}

Trainer::~Trainer() {

}
