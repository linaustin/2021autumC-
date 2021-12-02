#include<iostream>
#include<cstdlib>

using namespace std;

int main(void){

int a,b=5;
double c =3.14;

cout<< "a=" << a << ", sizeof(a)=" << sizeof(a);
cout<< ", 位置為" << &a << endl;

cout<< "b=" << b << ", sizeof(b)=" << sizeof(b);
cout<< ", 位置為" << &b << endl;


cout<< "c=" <<  c << ", sizof(c)=" << sizeof(c);
cout<< ", 位置為" << &c << endl;

system("pause");
return 0;


}
