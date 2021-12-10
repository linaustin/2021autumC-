#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream output("C:\\Users\\linau\\Desktop\\computer_programming\\programming\\week10\\openfile2_out.txt", ios::app);

    if(output.is_open()){

        output << "new thing is here" << endl;
        cout << "append success" << endl;

    }
    else{
        cout << "fail to open file" << endl;
    }

    output.close();

    return 0;
}