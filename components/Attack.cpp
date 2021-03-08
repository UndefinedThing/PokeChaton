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

Attack::Attack() {
    cout <<" This is your pokemon :slight_smile: "<< endl ;


                showPokemon(pokemons[0]);
                std::vector<int> tab  = pokemons[0].getSkillPoints();
                cout <<" "<< endl <<"Which skill do you want to use to attack ?"<<endl<<"Please, make your choice by entering 1; 2 or 3"<<endl;

                int choix1 ;

                cin >> choix1;

                switch (choix1) {

                case 1:

                    // Attacking other pokemons

                    for (int x = 0; x < pokemons.size(); x++) {
                        if (x != 0) {
                            pokemons[x].isAttackedByAnotherPokemonSkillPoints(tab[0]);

                            int z = x+1;

                            cout<<"Pokemon 1 attacked Pokemon " << z << " !"<<endl;


                        }
                    }

                    break;
                case 2:

                    // Attacking other pokemons

                    for (int x = 0; x < pokemons.size(); x++) {
                        if (x != 0) {
                            pokemons[x].isAttackedByAnotherPokemonSkillPoints(tab[1]);

                                int z = x+1;
                            cout<<"Pokemon 1 attacked Pokemon " << z << " !"<<endl;
                        }
                    }

                    break;
                case 3:
                    // Attacking other pokemons

                    for (int x = 0; x < pokemons.size(); x++) {
                        if (x != 0) {
                            pokemons[x].isAttackedByAnotherPokemonSkillPoints(tab[2]);

                                    int z = x+1;
                            cout<<"Pokemon 1 attacked Pokemon " << z << " !"<<endl;
                        }
                    }
                 case 4:
                    // Attacking other pokemons

                    for (int x = 0; x < pokemons.size(); x++) {
                        if (x != 0) {
                            pokemons[x].isAttackedByAnotherPokemonSkillPoints(tab[2]);

                                    int z = x+1;
                            cout<<"Pokemon 1 attacked Pokemon " << z << " !"<<endl;
                        }
                    }
}

Attack::~Attack() {

}

Attack::Attack(int idType, const string &libelle, float primaryAtkadvantage, float secondaryAtkadvantage,
               float primaryDefweaknesses, float secondaryDefweaknesses, int idAtk, const string &labelle, int stamCost,
               const Type &type) : Type(idType, libelle, primaryAtkadvantage, secondaryAtkadvantage,
                                        primaryDefweaknesses, secondaryDefweaknesses), IdAtk(idAtk), Labelle(labelle),
                                   StamCost(stamCost), type(type) {}
