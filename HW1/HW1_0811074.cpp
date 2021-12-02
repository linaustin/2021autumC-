#include <iostream>
#include <time.h>
#include <string>

using namespace std;

void stringSwap(char &a, char &b);

string code_table_generator();
string encode(string input1, string code_table);
string decode(string input2, string code_table);

int main(void) {

    string code_table;
    code_table=code_table_generator();

    string userInput;
    getline(cin,userInput);

    string enCodeMessage = encode(userInput,code_table);
    cout << "encode result : " << endl;
    cout << enCodeMessage << endl;

    string deCodeMessage = decode(enCodeMessage, code_table);
    cout << "decode result : " << endl;
    cout << deCodeMessage << endl;

    return 0;
}

void stringSwap(char &a, char &b) {

    char temp = a;
    a = b;
    b = temp;
}

string code_table_generator() {

    srand(time(NULL));

    string table = "abcdefghijklmnopqrstuvwxyz";
    cout << table << endl;

    for (int i = 0; i < 26; i++) {

        int k = rand() % 26;

        stringSwap(table[i], table[k]);
    }

    cout << table << endl;

    return table;
}

string encode(string input1,string code_table){

    int limit = input1.length();
    string result;

    for(int i = 0; i < limit; i++){

        if(input1[i] >= 'a' && input1[i] <= 'z'){
            result += code_table[input1[i] - 'a'];
        }

        else if(input1[i] >= 'A' && input1[i] <='Z') {
            result += (code_table[input1[i] - 'A'] - 'a' + 'A');
        }

        else{
            result += input1[i];
        }

    }
    
    return result;
}

string decode(string input2, string code_table){
    int limit = input2.length();
    string result;

    for(int i = 0; i < limit; i++){

        if(input2[i] >= 'a' && input2[i] <= 'z'){
            result += 97 + code_table.find(input2[i]);
        }

        else if(input2[i] >= 'A' && input2[i] <='Z') {
            result += 65 + code_table.find(input2[i] - 'A' + 'a');
        }

        else{
            result += input2[i];
        }
    }

    return result;
}



