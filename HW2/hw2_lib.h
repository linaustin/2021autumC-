#ifndef PROGRAMMING_HW2_LIB_H
#define PROGRAMMING_HW2_LIB_H

#include <iostream>
#include <string>

using namespace std;

class  term{
public:
    term(float initCoef = 0, int initExp = 0);
    void set(float newCoef, int newExp);

    float getCoef();
    int getExp();

    friend class polynomial;

private:
    float coef;
    int exp;
};

class polynomial{
public:
    polynomial(string polyID = "F",int termNumber = 1);
    polynomial Add(polynomial input);
    int getDegree();
    int getArrayLen();
    int getTerms();
    float Eval(float x);
    void newTerm(float newCoef, int newExp);
    void setid(string inputID);
    void print();


private:
    term *termArray;
    int terms;
    int arrayLen;
    string id;
};

#endif //PROGRAMMING_HW2_LIB_H
