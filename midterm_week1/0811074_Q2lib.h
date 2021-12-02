#ifndef PROGRAMMING_0811074_Q2LIB_H
#define PROGRAMMING_0811074_Q2LIB_H

#include <iostream>
#include <cmath>

using namespace std;

struct triangle{
    double edge_1 = 0;
    double edge_2 = 0;
    double edge_3 = 0;
};

bool istri(struct triangle tri);
double area(struct triangle tri);
bool isright(struct triangle tri);

#endif //PROGRAMMING_0811074_Q2LIB_H
