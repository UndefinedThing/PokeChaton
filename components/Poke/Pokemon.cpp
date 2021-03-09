//
// Created by paulf on 18/01/2021.
//

#include "../../header/Poke/Pokemon.h"
#include "../../header/Poke/Species.h"




bool Pokemon::is_capture(Pokemon pokemon) {
    double r;
    r = rand() % 100 + 1;
    int hm = pokemon.getHealthmax();
    int h = pokemon.getHealth();
    int m_ = 0.5 * pokemon.getHealthmax();
    if (pokemon.getLegendary() == 1) {

        if (pokemon.getHealth() < (0.2 * pokemon.getHealthmax())) {

            if (r > 60) {
                return true;
            } else {
                return false;
            }
        } else {

            if (r > 95) {
                return true;
            } else {
                return false;
            }
        }
    } else {

        if (pokemon.getHealth() < (0.5 * pokemon.getHealthmax())) {

            if (r > 0) {
                return true;
            } else {
                return false;
            }
        } else {

            if (r > 80) {
                return true;
            } else {
                return false;
            }
        }
    }

}


bool Pokemon::capture(Pokemon pokemon, vector<Pokemon> &team, vector<Pokemon> &box) {
    int team_size = team.size();
    int so = sizeof(team[0]);
    int divide = team_size/so;
    if (is_capture(pokemon)) {
        if (team_size>5) {
//            int a = box.size();
            box.push_back (pokemon);
            cout << " Sucess your pokemon is in your box " << endl;
        } else {
//            int a = team.size();
            team.push_back (pokemon);
            cout << " Sucess your pokemon is in your team " << endl;
        }
        return true;
    } else {
        cout << " Capture failed " << endl;
        return false;
    }

}


void change(int a, int b, vector<Pokemon> &team, vector<Pokemon> &box) {
    Pokemon change = team[a - 1];
    team[a - 1] = box[b - 1];
    box[b - 1] = change;
}

Pokemon::Pokemon() {}

Pokemon::Pokemon(int idPokemon, const string &name, const Gender &gender, const vector<Type> &type, int lvl, int health,
                 int healthMax, int attackModifier, int defenceModifier, int specialModifier, int speedModifier,
                 int precisionModifier, const Species &species, const vector<Attack> &atkList) : idPokemon(idPokemon),
                                                                                                 name(name),
                                                                                                 gender(gender),
                                                                                                 type(type), Lvl(lvl),
                                                                                                 health(health),
                                                                                                 healthMax(healthMax),
                                                                                                 attackModifier(
                                                                                                         attackModifier),
                                                                                                 defenceModifier(
                                                                                                         defenceModifier),
                                                                                                 specialModifier(
                                                                                                         specialModifier),
                                                                                                 speedModifier(
                                                                                                         speedModifier),
                                                                                                 precisionModifier(
                                                                                                         precisionModifier),
                                                                                                 species(species),
                                                                                                 AtkList(atkList) {}

Pokemon::~Pokemon() {

}

int Pokemon::getIdPokemon() const {
    return idPokemon;
}

void Pokemon::setIdPokemon(int idPokemon) {
    Pokemon::idPokemon = idPokemon;
}

const string &Pokemon::getName() const {
    return name;
}

void Pokemon::setName(const string &name) {
    Pokemon::name = name;
}

const Gender &Pokemon::getGender() const {
    return gender;
}

void Pokemon::setGender(const Gender &gender) {
    Pokemon::gender = gender;
}

const vector<Type> &Pokemon::getType() const {
    return type;
}

void Pokemon::setType(const vector<Type> &type) {
    Pokemon::type = type;
}

int Pokemon::getLvl() const {
    return Lvl;
}

void Pokemon::setLvl(int lvl) {
    Lvl = lvl;
}

int Pokemon::getHealth() const {
    return health;
}

void Pokemon::setHealth(int health) {
    Pokemon::health = health;
}

int Pokemon::getHealthMax() const {
    return healthMax;
}

void Pokemon::setHealthMax(int healthMax) {
    Pokemon::healthMax = healthMax;
}

int Pokemon::getAttackModifier() const {
    return attackModifier;
}

void Pokemon::setAttackModifier(int attackModifier) {
    Pokemon::attackModifier = attackModifier;
}

int Pokemon::getDefenceModifier() const {
    return defenceModifier;
}

void Pokemon::setDefenceModifier(int defenceModifier) {
    Pokemon::defenceModifier = defenceModifier;
}

int Pokemon::getSpecialModifier() const {
    return specialModifier;
}

void Pokemon::setSpecialModifier(int specialModifier) {
    Pokemon::specialModifier = specialModifier;
}

int Pokemon::getSpeedModifier() const {
    return speedModifier;
}

void Pokemon::setSpeedModifier(int speedModifier) {
    Pokemon::speedModifier = speedModifier;
}

int Pokemon::getPrecisionModifier() const {
    return precisionModifier;
}

void Pokemon::setPrecisionModifier(int precisionModifier) {
    Pokemon::precisionModifier = precisionModifier;
}

const Species &Pokemon::getSpecies() const {
    return species;
}

void Pokemon::setSpecies(const Species &species) {
    Pokemon::species = species;
}

const vector<Attack> &Pokemon::getAtkList() const {
    return AtkList;
}

void Pokemon::setAtkList(const vector<Attack> &atkList) {
    AtkList = atkList;
}
