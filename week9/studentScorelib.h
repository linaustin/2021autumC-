#ifndef PROGRAMMING_STUDENTSCORELIB_H
#define PROGRAMMING_STUDENTSCORELIB_H

#include <iostream>
#include <string>

using namespace std;


class Student{
private:
    string name;
    double mathScore;
    double englishScore;

public:
    void set(string inputName, double math, double english);
    bool pass();
    friend int numpass(Student *input);
};


#endif //PROGRAMMING_STUDENTSCORELIB_H
