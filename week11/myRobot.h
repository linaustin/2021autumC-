#ifndef PROGRAMMING_MYROBOT_H
#define PROGRAMMING_MYROBOT_H

#include <iostream>
#include <string>

using namespace std;

class myRobot {
public:

    myRobot(string input);
    virtual ~myRobot();
    void set_age(int input);
    void jump(int height);
    void run(int distance);
    void charge();


protected:
    int age;
    int battery;
    string name;
};


class robotson : public myRobot{
public:
    robotson(string input);
    void fly(int distance);
};


#endif //PROGRAMMING_MYROBOT_H
