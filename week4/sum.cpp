#include <iostream>


using namespace std;

int sum(int *x,int *y);

int a = 0;
int b = 0;
int ans = 0;

int *num1 = &a;
int *num2 = &b;



int main(void){

cout << "enter a and b :" << endl;
cin >> a >> b;


ans = sum (num1,num2);

cout << "a is : " << a << " b is : " << b << endl;
cout << "sum is : " << ans << endl;

return 0;

}

int sum(int *x,int *y){
    *x += 5;
    *y -= 5;

int sum = *x + *y;

return sum;
}
