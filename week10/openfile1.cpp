#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream ofile("C:\\Users\\linau\\Desktop\\computer_programming\\programming\\week10\\openfile1_out.txt", ios::out);

    if(ofile.is_open()){
        ofile << "file1 is open" << endl;
        ofile << "hello file1 !" << endl;
        cout << "already output string to file" << endl;
    }

    else{
        cout << "fail to open file1" << endl;
    }

    ofile.close();

    return 0;
}