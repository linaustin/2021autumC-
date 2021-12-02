#include <iostream>
#include <string>

using namespace std;
string codeTableGenerator(string key);
void encode (string &input, string codeTable);

int main(){

    cout << "enter yout key : ";
    string keyword;
    getline(cin,keyword);

    string codeTable = codeTableGenerator(keyword);
    cout << "code table is : " << codeTable << endl;

    cout << "enter message : ";
    string msg;
    getline(cin,msg);
    encode(msg,codeTable);
    cout << "message is :" << msg << endl;

    return  0;
}

string codeTableGenerator(string key){

    string alpha;
    alpha = "abcdefghijklmnopqrstuvwxyz";

    int len = key.length();
    string temp;

    for(int i = 0; i < len; i++){
        temp += key[i];
        alpha.erase(alpha.find(temp),1);
        temp.clear();
    }

    key += alpha;

    return key;
}

void encode (string &input, string codeTable){

    int len = input.length();
    string temp;

    for(int i = 0; i < len; i++){

        if(input[i] >= 'a' && input[i] <= 'z') {
            temp += codeTable[input[i] - 'a'];
            input.replace(i, 1, temp);
            temp.clear();
        }
    }

    return;
}