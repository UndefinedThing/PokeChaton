//
// Created by danny on 18/01/2021.
//

#include <string>
#include <iostream>
#include <fstream>
#include <limits>
#include "Interface.h"

using namespace std;

string mainMenuPrint() {
    string mainMenuPrint;
    mainMenuPrint =  "-----------------------------------------------------------\n";
    mainMenuPrint += "|                                                         |\n";
    mainMenuPrint += "|                                                         |\n";
    mainMenuPrint += "|                                                         |\n";
    mainMenuPrint += "|                                                         |\n";
    mainMenuPrint += "|                         _______                         |\n";
    mainMenuPrint += "|                        /  (-)  \\                        |\n";
    mainMenuPrint += "|                        |  ___  |                        |\n";
    mainMenuPrint += "|                        |__| |__|           ||||||||||   |\n";
    mainMenuPrint += "|                                            |/\\/\\/\\/\\|   |\n";
    mainMenuPrint += "|                                            /\\/\\/\\/\\/\\   |\n";
    mainMenuPrint += "|                                                         |\n";
    mainMenuPrint += "-----------------------------------------------------------\n";
    mainMenuPrint += "|                                                         |\n";
    mainMenuPrint += "|  Où voulez vous allez ? :                               |\n";
    mainMenuPrint += "|                                                         |\n";
    mainMenuPrint += "|  1. Hautes herbes. (attaquer des pokemons)              |\n";
    mainMenuPrint += "|  2. Boutique Pokémon ( achat d'objet )                  |\n";
    mainMenuPrint += "|  3. Centre Pokémon ( soigné et pc )                     |\n";
    mainMenuPrint += "|  4. Sac ( objets et Pokémons possédés )                 |\n";
    mainMenuPrint += "|  5. Options                                             |\n";
    mainMenuPrint += "|                                                         |\n";
    mainMenuPrint += "|                                                         |\n";
    mainMenuPrint += "-----------------------------------------------------------\n";
    return mainMenuPrint;
}
void Interface::print(const string& nameFile) {
// Create a text string, which is used to output the text file
    string myText;

// Read from the text file
    ifstream MyReadFile(nameFile);

// Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText)) {
        // Output the text from the file
        cout << myText;
    }

// Close the file
    MyReadFile.close();
}

void Interface::mainMenu() {
    bool play = true;
    int action=0;
    while (play) {
//        print(R"(E:\Danny\code\ynov\C++\projet pokemon\PokeChaton\components\Interface\prints\mainMenu.txt)");
        cout << mainMenuPrint();
        cin >> action;
        action = (int) action;
        switch (action) {
            case 1:
                cout << "tallGrass" << endl;
//            tallGrass();
                break;
            case 2:
                cout << "pokeShop" << endl;
//            pokeShop();
                break;
            case 3:
                cout << "pokeCenter" << endl;
//            pokeCenter();
                break;
            case 4:
                cout << "bag" << endl;
//            bag();
                break;
            case 5:
                cout << "option" << endl;
//            option();
                break;
            case 6:
                play = false;
                break;
            default:
                cout << "Erreur de frappe recommencez" << endl;
                break;

        }
        cin.clear(); // clears the error flags
        // this line discards all the input waiting in the stream
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    }

/*
    |  1. Hautes herbes. (attaquer des pokemons)              |
    |  2. Boutique Pokémon ( achat d'objet )                  |
    |  3. Centre Pokémon ( soigné et pc )                     |
    |  4. Sac ( objets et Pokémons possédés )                 |
    |  5. Options                                             |
*/

}
