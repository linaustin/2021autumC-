#ifndef PROGRAMMING_TRIANGLELIB_H
#define PROGRAMMING_TRIANGLELIB_H
#include <iostream>
#include <cmath>

using namespace std;

class Triangle{
private:
    double edge1 = 0;
    double edge2 = 0;
    double edge3 = 0;

public:
    void setTri(double e1, double e2, double e3);
    bool istri();
    double area();
    double perimeter();

    friend void show_data(Triangle );
};


#endif //PROGRAMMING_TRIANGLELIB_H
