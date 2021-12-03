#ifndef PROGRAMMING_TRIANGLE_CLASSLIB_H
#define PROGRAMMING_TRIANGLE_CLASSLIB_H

#include <iostream>
#include <cmath>

using namespace std;

class Triangle{
private:
    double edge1;
    double edge2;
    double edge3;

public:
    Triangle(double e1, double e2, double e3);
    Triangle();
    bool istri();
    double area();
    double perimeter();
    Triangle compare(Triangle obj);
};

#endif //PROGRAMMING_TRIANGLE_CLASSLIB_H
