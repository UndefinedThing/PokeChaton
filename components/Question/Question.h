//
// Created by danny on 23/02/2021.
//

#include <vector>
#include <iostream>

using namespace std;


#ifndef POKECHATON_QUESTION_H
#define POKECHATON_QUESTION_H


class Question {
public:
    Question();
    Question(int id, const string &sentence, const std::vector<string *> *answer);

    int getId() const;

    void setId(int id);

    const string &getSentence() const;

    void setSentence(const string &sentence);

    const vector<string *> &getAnswer() const;

    void setAnswer(const vector<string *> &answer);

    void setById(int id);

    static void printById(int id);

private:
    int id;
    string sentence;

    std::vector<string *> answer;
};


#endif //POKECHATON_QUESTION_H
