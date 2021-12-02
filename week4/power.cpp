#include <iostream>

using namespace std;


int power(int x,int n);
double power (double x, int n);


int main(void){

    double x;
    int  n;
    double ans;


    cout << "enter x power n : ";
    cin >> x >> n;
    ans = power(x, n);

    cout << "ans is :" << ans << endl;



return 0;
}

int power(int x,int n){

int res =1;

for(int i = 0 ; i < n; i++){
    res = res * x;

}
cout << "int"<<endl;
return res;

}

double power(double x,int n){

double res =1;

for(int i = 0 ; i < n; i++){
    res = res * x;

}
cout << "double" << endl;
return res;

}
