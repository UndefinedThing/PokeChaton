//
// Created by danny on 18/01/2021.
//

#include <string>
#include <iostream>
#include <fstream>
#include <limits>
#include "Interface.h"
#include <windows.h>
#include <sstream>
#include "../Question/Question.h"


using namespace std;


string getCurrentDir() {
    char buff[MAX_PATH];
    GetModuleFileName( NULL, buff, MAX_PATH );
    string::size_type position = string( buff ).find_last_of( "\\/" );
    return string( buff ).substr( 0, position);
}


/*
    "-----------------------------------------------------------\n"
    "|                                                         |\n"
    "|                                                         |\n"
    "|                                                         |\n"
    "|                                                         |\n"
    "|                         _______                         |\n"
    "|                        /  (-)  \\                        |\n"
    "|                        |  ___  |                        |\n"
    "|                        |__| |__|           ||||||||||   |\n"
    "|                                            |/\\/\\/\\/\\|   |\n"
    "|                                            /\\/\\/\\/\\/\\   |\n"
    "|                                                         |\n"
    "-----------------------------------------------------------\n"
*/


void Interface::print(const string& nameFile) {
// Create a text string, which is used to output the text file
    string myText;

// Read from the text file
    ifstream MyReadFile(nameFile);

// Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText)) {
        // Output the text from the file
        cout << myText << endl;
    }

// Close the file
    MyReadFile.close();
}

void optionGame(){
    int action=0;

    Interface::print("../components/Interface/prints/mainMenu.txt");
    cin >> action;
    action = (int) action;
    switch (action) {
        case 5:
            cout << "tallGrass" << endl;
//            tallGrass();
            break;
        default:
            cout << "Erreur de frappe recommencez" << endl;
            break;

    }
    cin.clear(); // clears the error flags
    // this line discards all the input waiting in the stream
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

}

[[noreturn]] void Interface::mainMenu() {
    bool play = true;
    int action=0;

    while (play) {

        print("../components/Interface/prints/mainMenu.txt");
        Question::printById(1);
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
//            optionGame();
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
