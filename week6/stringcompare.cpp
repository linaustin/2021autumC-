#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void stringCompare(string input1, string input2);

int main(void) {

    cout << "enter first string : ";
    string userInput1;
    getline(cin, userInput1);

    cout << "enter second string : ";
    string userInput2;
    getline(cin, userInput2);

    stringCompare(userInput1,userInput2);

    return 0;
}

void stringCompare(string input1, string input2) {
    bool check = false;
    check = input1.compare(input2);

    if (check) {
        input1 += input2;
        cout << "input1 not equal to input2" << endl;
        cout << input1 << endl;
    }
    else {
        cout << "input1 is equal to input2" << endl;
        cout << input1 << endl;
    }

    return;
}