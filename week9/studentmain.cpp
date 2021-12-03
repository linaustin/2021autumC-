#include <iostream>
#include <string>
#include "studentScorelib.h"

using namespace std;

int numpass(Student *input);

int studentNum;

int main(){

    cout << "enter student number: ";
    cin >> studentNum;
    cin.get();

    Student *stu;
    stu = new Student[studentNum];

    string inputName;
    double math = 0,english = 0;

    for (int i = 0; i < studentNum ; i ++){
        cout << "enter student's name, math score, english score :";
        getline(cin,inputName,'\n');

        cin >> math ;
        cin.get();
        cin >> english;
        cin.get();

        stu[i].set(inputName,math,english);
        inputName.clear();
    }

    int passNumber = numpass(stu);
    cout << "pass : " << passNumber <<endl;
    cout << "fail : " << studentNum - passNumber << endl;

    return 0;
}

int numpass(Student *input){

    int passNum = 0;
    cout << "fail member : ";
    for(int i = 0; i < studentNum; i++){
        if(input[i].pass()){
            passNum += 1;
            continue;
        }
        else{
            cout << input[i].name << " ";
        }
    }
    cout << endl;

    return passNum;
}