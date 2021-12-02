#include <iostream>
#include <string>


using namespace std;

struct  studentData{
    int studentID = 0;
    string studentName;
    int midterm = 0;
    int final = 0;
    int normal = 0;
};

int main(void){

    studentData austin;

    cout << "ID : ";
    cin >> austin.studentID;
    cout << "name : ";
    cin >> austin.studentName;
    cout << "midterm is : ";
    cin >> austin.midterm;
    cout << "final is : ";
    cin >> austin.final;
    cout << "normal is : ";
    cin >> austin.normal;
    cout << austin.studentName<<"'s "<< "Grade is : " << 0.3 * austin.final + 0.3 * austin.midterm + 0.4 * austin.normal << endl;



    return 0;
}
