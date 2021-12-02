#include <iostream>
#include <cstdlib>
using namespace std;

void add(int a,int b);


int main(void)
{
int num1 = 3 , num2 = 6;

cout<<"before func num1 : "<<num1<<" num2: "<<num2<<endl;
cout<<endl;

add(num1,num2);

cout<<endl;

cout<<"after func num1 : "<<num1<<" num2: "<<num2<<endl;


return 0;
}

void add(int a,int b){


a+=10;
b+=10;

cout<<"in func a : "<<a<<" b: "<<b<<endl;


return;
}
