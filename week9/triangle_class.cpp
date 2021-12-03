#include <iostream>
#include "triangle_classlib.h"

using namespace std;

int main(void){
    double input[3];

    cout << "enter triangle's three edge :" << endl;

    for (int i = 0; i < 3; i++){
        cin >> input[i];
    }

    Triangle object1(input[0],input[1],input[2]);
    Triangle object2;

    if(object1.istri()){
        cout << "is a triangle" << endl;
        cout << "area is : " << object1.area() << endl;
        cout << "perimeter is : " << object1.perimeter() << endl;
    }
    else{
        cout << "is not a triangle" << endl;
    }

    cout << endl;

    if(object2.istri()){
        cout << "is a triangle" << endl;
        cout << "area is : " << object2.area() << endl;
        cout << "perimeter is : " << object2.perimeter() << endl;
    }
    else{
        cout << "is not a triangle" << endl;
    }

    Triangle bigger = object1.compare(object2);
    cout << "bigger area is : " << bigger.area() << endl;

    return 0;
}

