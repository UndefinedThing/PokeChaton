//
// Created by danny on 23/02/2021.
//

#include "Question.h"
#include <fstream>
#include <algorithm>


Question::Question() {

}

Question::Question(int id, const string &sentence, const std::vector<string *> *answer) {

}

int Question::getId() const {
    return id;
}

void Question::setId(int id) {
    Question::id = id;
}

const string &Question::getSentence() const {
    return sentence;
}

void Question::setSentence(const string &sentence) {
    Question::sentence = sentence;
}

const vector<string *> &Question::getAnswer() const {
    return answer;
}

void Question::setAnswer(const vector<string *> &answer) {
    Question::answer = answer;
}

void Question::setById(int id){

}

//
int count(const string& line, char occurrence){
    return count(line.begin(), line.end(), occurrence);
}

void parse(string line, const string& delimiter, vector<string> &returnValues){

    size_t pos = 0;
    string token;

    while ((pos = line.find(delimiter)) != std::string::npos) {
        token = line.substr(0, pos);
        returnValues.push_back(token);
        line.erase(0, pos + delimiter.length());
    }

}


void Question::printById(int id){
    int nbCol;
    int nbline;
    int sto;
    string firstLine;
    string myText;
//    vector<string> libelles;
    vector<string> questionContent;
    string nameFile = R"(..\components\Question\Questions.csv)";


    ifstream MyReadFile(nameFile);
    getline(MyReadFile, firstLine);
//    parse(firstLine, ";", libelles);
    nbCol = count(firstLine, ';')+1;
//    nbline = count(istreambuf_iterator<char>(MyReadFile),
//                   istreambuf_iterator<char>(), '\n');

    cout << firstLine << endl;

// Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText)) {
        // Output the text from the file
        parse(myText, ";", questionContent);
        sto = stoi(questionContent[0]);
        if (sto == id){
            for (int i = 1; i < nbCol; ++i) {
                cout << questionContent[i] << endl;
            }

        }
        // vider questionContent
    }

// Close the file
    MyReadFile.close();




}

