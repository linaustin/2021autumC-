#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream inputFile("C:\\Users\\linau\\Desktop\\computer_programming\\programming\\week10\\rand.txt", ios::in);

    int num;
    int count = 0;
    float avg = 0;

    inputFile >> num;

    while(inputFile.peek() != EOF){

        //cout << num <<endl;
        avg = avg + num;
        count += 1;
        //cout << count << endl;
        inputFile >> num;
    }

    avg = avg / count;

    cout << "avg is : " << avg <<endl;

    return 0;
}
