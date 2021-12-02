#include "0811074_Q2lib.h"
#include <iostream>

using namespace std;

int main(void){

    struct triangle input;

    cout << "enter three edge of triangle : " << endl;
    cin >> input.edge_1 >> input.edge_2 >> input.edge_3;

    bool isTriangle = istri(input); //檢查三角形是否成立
    if(isTriangle){
        cout << "Is a triangle" << endl;

        double triangleArea = area(input); //三角形面積
        cout << "area = " << triangleArea << endl;
        bool right = isright(input);    //檢查是否為直角三角形
        if(right){
            cout << "right angle"<< endl;
        }
        else{
            cout << "not right angle" << endl;
        }

    }
    else{
        cout << "Is not a triangle" << endl;
    }

    return 0;
}
