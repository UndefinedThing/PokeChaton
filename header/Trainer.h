//
// Created by paulf on 12/01/2021.
//

#ifndef POKEMONLINE_TRAINER_H
#define POKEMONLINE_TRAINER_H

#include <vector>
#include "main.h"
#include "Gender.h"


class Trainer : public Gender{
private:
    string name;
    Gender gender;
    int age;
    vector<Pokemon> belt;

public:

    Trainer();

    Trainer(int id, int libelle, const string &name, const Gender &gender, int age, const vector<Pokemon> &belt);

    virtual ~Trainer();

    const string &getName() const;

    void setName(const string &name);

    const Gender &getGender() const;

    void setGender(const Gender &gender);

    int getAge() const;

    void setAge(int age);

    const vector <Pokemon> &getBelt() const;

    void setBelt(const vector <Pokemon> &belt);


};

#endif //POKEMONLINE_TRAINER_H
