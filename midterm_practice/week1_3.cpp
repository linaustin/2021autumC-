#include <iostream>

using namespace  std;

int power(int a,int b);

int main(void){

    int n = 0;
    int m = 0;
    cout << "enter easonnumber's range (n,m) : ";
    cin >> n >> m;

    int digit = 0;
    for(int target = n; target <= m; target++){

        int number[10] ={0};
        int count = 0;
        int eason = 0;
        int test = target;

        while(test != 0){
            number[count] = test % 10;
            test = test/10;
            count += 1;
        }

        if(count != digit){

            if(digit!= 0){
                cout << endl;
            }
            cout << count << endl;
            digit = count;
        }

        for(int i = 0; i <count ;i++){
            eason += power(number[i],count);
        }

        if(eason == target){
            cout << target << "  ";
        }
    }




    return 0;
}

int power(int a,int b){
    int result =1;
    for (int i =0; i < b; i++){
        result = result * a;
    }

    return  result;
}