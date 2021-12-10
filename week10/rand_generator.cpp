#include <iostream>
#include <fstream>
#include <cstdlib>
#include <random>
#include <time.h>

using namespace std;

int main(){

    ofstream randfile("C:\\Users\\linau\\Desktop\\computer_programming\\programming\\week10\\rand.txt", ios::out);
    ofstream randavg("C:\\Users\\linau\\Desktop\\computer_programming\\programming\\week10\\avg.txt", ios::out);


    float avg = 0;
    int count = 0;

    srand(time(NULL));
    if(randfile.is_open() && randavg.is_open()) {
        cout << "open ranfile" << endl;

        for (int i = 0; i < 5; i++) {

            int num = rand() % 10000;
            avg = avg + num ;
            randfile << num << " ";
            count += 1;
        }
    }
    else {
        cout <<"fail open file" <<endl;
    }

    avg = avg / count;

    randavg << avg << endl;

    randfile.close();
    randavg.close();

    return 0;
}
