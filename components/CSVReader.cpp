//
// Created by danny on 02/03/2021.
//

#include "CSVReader.h"
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>


using namespace std;



//int count(const string& line, char occurrence){
//    return count(line.begin(), line.end(), occurrence);
//}
//
//void parse(string line, const string& delimiter, vector<string> returnValues){
//
//    size_t pos = 0;
//    string token;
//
//    while ((pos = line.find(delimiter)) != std::string::npos) {
//        token = line.substr(0, pos);
//        returnValues.push_back(token);
//        line.erase(0, pos + delimiter.length());
//    }
//
//}

//void CSVReader::read(const string& nameFile){
//    int nbCol;
//    int nbline;
//    string firstLine;
//    string myText;
//    vector<string> libelles;
//
//
//    ifstream MyReadFile(nameFile);
//    getline(MyReadFile, firstLine);
//    parse(firstLine, ";", libelles);
//    nbCol = count(firstLine, ',');
//    nbline = count(istreambuf_iterator<char>(MyReadFile),
//          istreambuf_iterator<char>(), '\n');
//
//    cout << firstLine << endl;
//
//    string **contentCSV = new string*[nbline];
//    for (int i = 0; i < nbline; i++)
//        contentCSV[i] = new string[nbCol];
////    parse();
//    for (int i = 0; i < nbCol; ++i) {
//        contentCSV[0][i] = libelles[i];
//    }
//    for (int i = 0; i < nbCol; ++i) {
//        contentCSV[0][i] = libelles[i];
//    }
//
//    for (int i = 0; i < nbline; i++)
//        delete[] contentCSV[i];
//    delete[] contentCSV;
//
//
//
//
//}


