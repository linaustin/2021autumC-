#include<iostream>

using namespace std;


void add(int &num1, int &num2 );

int main(void){
int a=0, b=0;


cout << "enter a and b :   ";
cin >> a >> b;
cout << a << b<<endl;

add(a,b);

cout << a << b<<endl;



return 0;
}

void add(int &num1, int &num2 ){


num1 = num1 +num2;

return ;

}
