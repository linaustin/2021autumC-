#ifndef PROGRAMMING_STUDENTLIB_H
#define PROGRAMMING_STUDENTLIB_H

#include <string>
#include <iostream>

using namespace std;

struct studentGrade{
    string ID;
    int midterm =0;
    int final = 0;
    double semesterGrade = 0;
};

void clcGrade(struct studentGrade *input);

#endif //PROGRAMMING_STUDENTLIB_H
