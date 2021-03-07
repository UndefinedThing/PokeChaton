#include <iostream>
#include "components/Interface/Interface.h"

#include "components/CSVReader.h"
#include "components/Question/Question.h"

using namespace std;



int main() {
//    std::cout << "Hello, World!" << std::endl;
//    Interface::mainMenu();
    Question::printById(1);
//    CSVReader::read(R"(..\components\Question\Questions.csv)");
//    Interface::print(R"(..\components\Interface\prints\mainMenu.txt)");

    return 0;
}
