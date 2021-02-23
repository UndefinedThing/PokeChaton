//
// Created by paulf on 18/01/2021.
//

#ifndef POKECHATON_POKECHAT_H
#define POKECHATON_POKECHAT_H


#include <iostream>
#include "../main.h"
#include "../Attack.h"
#include "Speace.h"


using namespace std;

class PokeChat {
private:
    int IdPokeChat;
    string name;
    Gender gender;
    vector<Type> type;
    int Lvl;
    int Health;
    int attaqueModifer;
    int defenceModifer;
    int spécialModifer;
    int vitesseModifer;
    int precisinModifer;
    Speace speaces;
    vector<Attack> AtkList;

public:

    Chatzard() {
        this-> name = "banane";
        this-> type.push_back = Type.;
        this->_ = 6;
        this-> Lvl = BASE_LEVEL;
        this-> attacks.push_back(ember);
    }

    void pokeChatEvo

    void PokeChat::addPokeChat(int idPokeChat, const string &name, const Gender &gender, const vector<Type> &type, int lvl,
                               int health, int attaqueModifer, int defenceModifer, int spécialModifer, int vitesseModifer,
                               int precisinModifer, const Speace &speaces1, const vector<Attack> &atkList);

    PokeChat();


    PokeChat(int idPokeChat, const string &name, const Gender &gender, const vector<Type> &type, int lvl, int health,
             int attaqueModifer, int defenceModifer, int spécialModifer, int vitesseModifer, int precisinModifer,
             const Speace &speaces1, const vector<Attack> &atkList);


    virtual ~PokeChat();

    int getAttaqueModifer() const;

    void setAttaqueModifer(int attaqueModifer);

    int getDefenceModifer() const;

    void setDefenceModifer(int defenceModifer);

    int getSpécialModifer() const;

    void setSpécialModifer(int spécialModifer);

    int getVitesseModifer() const;

    void setVitesseModifer(int vitesseModifer);

    int getPrecisinModifer() const;

    void setPrecisinModifer(int precisinModifer);


    int getIdPokeChat() const;

    void setIdPokeChat(int idPokeChat);

    const string &getName() const;

    void setName(const string &name);

    const Gender &getGender() const;

    void setGender(const Gender &gender);

    const vector<Type> &getType() const;

    void setType(const vector<Type> &type);

    int getLvl() const;

    void setLvl(int lvl);

    int getHealth() const;

    void setHealth(int health);

    const Speace &getSpeaces() const;

    void setSpeaces(const Speace &speaces);


    const vector<Attack> &getAtkList() const;

    void setAtkList(const vector<Attack> &atkList);


}



#endif //POKECHATON_POKECHAT_H
