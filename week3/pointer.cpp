#include<iostream>
#include<cstdlib>

using namespace std;

int main(void){

int a,b=5;
double c =3.14;

cout<< "a=" << a << ", sizeof(a)=" << sizeof(a);
cout<< ", ��m��" << &a << endl;

cout<< "b=" << b << ", sizeof(b)=" << sizeof(b);
cout<< ", ��m��" << &b << endl;


cout<< "c=" <<  c << ", sizof(c)=" << sizeof(c);
cout<< ", ��m��" << &c << endl;

system("pause");
return 0;


}
