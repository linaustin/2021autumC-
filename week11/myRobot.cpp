#include "myRobot.h"

myRobot::myRobot(string input) {
    cout<< input << " is create" <<endl;
    this->name = input;
    this->battery = 100;
}

void myRobot::set_age(int input) {
    this-> age = input;
    return;
}

void myRobot::jump(int height) {
    cout<< name << " jump " << height << " (m)" <<endl;
    battery -= height;
    return;
}

void myRobot::run(int distance) {
    cout<< name << " jump " << distance << " (m)" <<endl;
    battery -= distance;
    return;

}

void myRobot::charge() {
    this->battery += 10;
    if(battery>=100){
        battery = 100;
    }
    cout <<"battery is : " << battery <<endl;
    return;
}

myRobot::~myRobot() {
    cout << name << " died!!!" <<endl;
    delete &battery;
    delete &age;
}

void robotson::fly(int distance) {
    cout << this->name << " fly " << distance <<endl;
    battery -= distance;
    return;
 }

 robotson::robotson(string input): myRobot(input){
    cout <<"robotson constructer run" <<endl;

}