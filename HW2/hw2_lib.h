#ifndef PROGRAMMING_HW2_LIB_H
#define PROGRAMMING_HW2_LIB_H

#include <iostream>

using namespace std;

class  term{
public:
    term(float initCoef = 0, int initExp = 0);
    void set(float newCoef, int newExp);
    friend class polynomial;

private:
    float coef;
    int exp;
};

class polynomial{
public:
    polynomial(int termNumber);
    void polynomialAdd(polynomial input);
    int getDegree();
    float Eval(float x);
    void newTerm(float newCoef, int newExp);
    void print();

private:
    term *termArray;
    int terms;
    int arrayLen;

};

#endif //PROGRAMMING_HW2_LIB_H
