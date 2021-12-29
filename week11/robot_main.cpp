#include <iostream>
#include "myRobot.h"

using namespace std;

int main(){
    cout << "main program start" << endl;
    int input = 0;
    cout <<"name your robot: "<<endl;
    string in_name;
    getline(cin,in_name);
    myRobot rob1(in_name);

    rob1.charge();
    rob1.run(1);
    rob1.jump(60);
    rob1.charge();

    robotson rob2("danny");
    rob2.run(10);
    rob2.fly(22);
    rob2.charge();

    return 0;
}