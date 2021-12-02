#include <iostream>
#include <time.h>
#include <cstdlib>

//20行的註解可以看target

using  namespace  std;

int randomGenerator();  //產生數字不重複的亂數
bool numberCheck(int target, int input);    //檢查有幾A幾B
bool inputCheck(int input);  //檢查輸入是否正確

int main(void){

    int target = randomGenerator();
    int input = 0;
    int count = 0;
    bool match = false;
    bool inputProtect = true;
    cout << "target is :" << target << endl;

    while(count < 4){
        cout << "Enter your guess : ";
        cin >> input;

        inputProtect = inputCheck(input);
        if(inputProtect == false){
            cout << "Invalid input" << endl;
            continue;
        }

        match = numberCheck(target,input);
        if(match){
            break;
        }
        count += 1;
    }

    if(match){
        cout << "AC!!" << endl;
    }
    else{
        cout << "Fail, Ans= " << target << endl;
    }

    return 0;
}

int randomGenerator(){

    srand(time(NULL));
    int digit = 0;
    int res[4] ={0};

    while(digit< 4){
        int temp = rand()%10;
        bool check = true;

        for(int i = 0; i < digit;i++){
            if(res[i] == temp){
                check = false;
            }
        }

        if(digit == 0 && temp == 0){    //防止第一位為0
            continue;
        }

        if(check){
            res[digit] = temp;
            digit += 1;
        }
    }

    int result = 0;
    for(int i = 0; i < 4; i++){
        result += res[i];

        if(i != 3){     //填完個位數後不*10
            result = result * 10;
        }
    }

    return result;
}

bool numberCheck(int target, int input){
    int a =0;
    int b =0;
    int arrtarget[4] = {0};
    int arrinput[4] = {0};

    for(int i =0 ;i < 4; i++){
        arrtarget[i] = target % 10;
        arrinput[i] = input % 10;
        target = target / 10;
        input = input / 10;
    }

    for(int i =0; i < 4; i++){
        for(int j = 0; j <4; j++){
            if(arrtarget[j] == arrinput[i]){
                if(i == j){
                    a += 1;
                }
                else{
                    b +=1;
                }
            }
        }
    }

    if(a != 4) {    //4A不輸出XAXB
        cout << a << "A" << b << "B" << endl;
    }

    if(a == 4){
        return true;
    }
    else{
        return false;
    }
}

bool inputCheck(int input){
    int arrinput[4] = {0};
    int i = 0;
    bool check = true;

    while(input!=0){
        arrinput[i] = input % 10;
        i += 1;
        input = input / 10;
    }

    for(int i = 0; i < 4;i++){

        if(check) {
            for (int j = 0; j < 4; j++) {
                if (i == j) {   //跳過自己不檢查
                    continue;
                }

                if (arrinput[i] == arrinput[j]) {
                    check = false;
                    break;
                }
            }
        }
        else{
            break;
        }
    }

    return  check;
}