#include <iostream>
#include "trianglelib.h"

using namespace std;

void show_data(Triangle Obj);

int main(void){

    Triangle object1;
    double e1, e2, e3;
    cout << "enter three edge of triangle : ";
    cin >> e1 >> e2 >> e3;
    object1.setTri(e1, e2, e3);
    if(object1.istri()){
        cout << "is a triangle" << endl;
        cout << "area is : " << object1.area() << endl;
        cout << "perimeter is : " << object1.perimeter() << endl;

        show_data(object1);
    }
    else{
        cout << "is not a triangle" << endl;
    }



    return 0;
}

void show_data(Triangle Obj){
    cout << " edge 1 :" << Obj.edge1 << endl;
    cout << " edge 2 :" << Obj.edge2 << endl;
    cout << " edge 3 :" << Obj.edge3 << endl;

    return;
}