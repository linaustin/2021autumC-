#include <iostream>
#include "hw2_lib.h"

using namespace std;
void inputPolyCoef(polynomial &input);


int main(){
    int termNumber;

    cout << "input Polynomial A:" <<endl;
    cout << "number of terms you want to enter : " << endl;
    cin >> termNumber;
    polynomial A("A",termNumber);
    inputPolyCoef(A);

    cout << "input Polynomial B:" <<endl;
    cout << "number of terms you want to enter : " << endl;
    cin >> termNumber;
    polynomial B("B",termNumber);
    inputPolyCoef(B);

    cout << endl;

    A.print();
    B.print();

    cout << endl;

    cout << "A.add(B) :" <<endl;
    polynomial C = A.Add(B);
    C.print();
    cout <<endl;

    cout << "A.Eval(2) :" <<endl;
    cout << A.Eval(2) <<endl;
    cout <<endl;

    cout << "A.getDegree() :" << endl;
    cout << A.getDegree() <<endl;

    return 0;
}

void inputPolyCoef(polynomial &input){  //要用參照，不然call by value不會更改到本來的東西

    float inputCoef;
    int inputExp;

    for(int i = 0; i < input.getArrayLen(); i++){

        cout << "input " << i+1 << "'s term coef and power :" <<endl;
        cin >> inputCoef >> inputExp;
        input.newTerm(inputCoef,inputExp);
    }

    return;
}

