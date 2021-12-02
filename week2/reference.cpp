#include <iostream>

using namespace std;

int main(void){


int a =10;

int &b = a;
int &c =b;

b+=10;
c-=5;

cout<< "a " << a << " ref   " << b <<endl;



return 0;
}
