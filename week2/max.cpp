#include <iostream>

using namespace std;

int max(int ,int);

int main(void){

int num1 = 0,num2 = 0;

cout << "enter two number : ";

cin >> num1 >> num2 ;

cout << num1 << "  "<< num2 <<endl;

cout << "the max is : " << max(num1,num2) << endl;




return 0;
}

int max(int a,int b ){

    if(a > b){
            return a;

    }

    else if(a==b){
        return -1;
    }

    else{
        return b;
    }


}
