#include <iostream>
#include <string>

using namespace  std;

void voewlChange(string &input);

int main(void){

    string input;

    cout << "enter a string :";
    getline(cin,input);

    voewlChange(input);
    cout << "first change :"<<endl;
    cout << input << endl;

    voewlChange(input);
    cout << "second change :"<<endl;
    cout << input << endl;

    return 0;
}

void voewlChange(string &input){

    string vowel;
    int len = input.length();
    bool *check = new bool[len];
    for (int i =0;i<len;i++){
        check[i]= false;
    }


    for(int i =0 ; i<len;i++){
        if(input[i]=='a' || input[i]=='e' || input[i]=='i' || input[i]=='o' || input[i]=='u'){
            check[i]=true;
            vowel += input[i];
        }
    }

    int j = vowel.length()-1;

    for(int i=0;i<len;i++){

        if(check[i]){
            string temp;
            temp += vowel[j];
            input.replace(i,1,temp);
            j -=1;
        }
    }
    return;
}