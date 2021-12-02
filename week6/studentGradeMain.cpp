#include <iostream>
#include "studentlib.h"


using namespace std;

int main(void){

    struct studentGrade student1;
    student1.midterm = 60;
    student1.final = 70;

    struct studentGrade student2;
    student2.midterm = 90;
    student2.final = 95;

    struct studentGrade student3;
    student3.midterm = 30;
    student3.final = 40;

    cout << "enter student1 ID :" << endl;
    getline(cin,student1.ID);
    cout << "enter student2 ID :" << endl;
    getline(cin,student2.ID);
    cout << "enter student3 ID :" << endl;
    getline(cin,student3.ID);

    clcGrade(&student1);
    clcGrade(&student2);
    clcGrade(&student3);

    cout << "student1's ID :" << student1.ID << " final grade :" << student1.semesterGrade << endl;
    cout << "student2's ID :" << student2.ID << " final grade :" << student2.semesterGrade << endl;
    cout << "student3's ID :" << student3.ID << " final grade :" << student3.semesterGrade << endl;



    return 0;
}
