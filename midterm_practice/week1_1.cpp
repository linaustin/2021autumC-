#include <iostream>

using  namespace std;

int main(void){

    int width , length;
    cout << "enter width and length : " << endl;
    cin >> width >> length ;

    length = length * 2 - 1;

    for(int i = 0; i < length; i++){
        if(i%(length-1) == 0){
            for(int j = 0 ;j < width ;j++){
                cout <<"*";
            }
            cout << endl;
        }
        else if (i%2 == 0){
            for(int j = 0 ;j < width ;j++){
                if(j%(width-1) == 0) {
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
            cout << endl;
        }
        else{
            cout << endl;
        }
    }


    return 0;
}