#include <iostream>

using namespace std;

struct classes{
    int pass = 0;
    int failed = 0;
};

int main(void){

    int grade;
    char ch;
    struct classes class1;

    for(int i = 0; i<5; i++){
        cout << "enter student " << i+1 << "'s grade: ";
        cin >> grade;
        ch=cin.get();
        if(grade >= 60){
            class1.pass += 1;
        }
        else {
            class1.failed += 1;
        }
    }

    cout << "Pass : " << class1.pass << endl;
    cout << "Failed : " << class1.failed << endl;

    return 0;
}