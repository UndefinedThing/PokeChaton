//
// Created by paulf on 18/01/2021.
//

#ifndef POKECHATON_SPEACE_H
#define POKECHATON_SPEACE_H



#include <iostream>
#include "../main.h"
#include "../Attack.h"
#include<fstream>


using namespace std;

class Speace {
private:
    int id;
    string SpeaceName;
    int lvlEvo;
    int attaque;
    int defence;
    int spécial;
    int vitesse;
    int precisin;



public:

    AddSpeace(int id, const string &speaceName, int lvlEvo, int attaque, int defence, int spécial, int vitesse,
           int precisin);

    Speace();

    Speace(int id, const string &speaceName, int lvlEvo, int attaque, int defence, int spécial, int vitesse,
           int precisin);

    virtual ~Speace();

    int getId() const;

    void setId(int id);

    const string &getSpeaceName() const;

    void setSpeaceName(const string &speaceName);

    int getLvlEvo() const;

    void setLvlEvo(int lvlEvo);

    int getAttaque() const;

    void setAttaque(int attaque);

    int getDefence() const;

    void setDefence(int defence);

    int getSpécial() const;

    void setSpécial(int spécial);

    int getVitesse() const;

    void setVitesse(int vitesse);

    int getPrecisin() const;

    void setPrecisin(int precisin);


};

#endif //POKECHATON_SPEACE_H
