#include <iostream>

using namespace std ;

void match(int *tab , int target, int *ans,int number);

int main(void){

    int table[4] = {2,9,13,20};
    int target = 0 ;
    int ans[2] = {-1,-1};

    cout << "enter target :";
    cin  >> target;
    cout << "table is : " ;

    for (int i=0 ; i<4 ; i++){
        cout << table[i] <<" ";
    }
    cout << endl;

   // cout << "sizeof table :" << sizeof(table) << endl;
    int number = sizeof(table)/sizeof(int);

    match(table,target,ans,number);

    cout << "ans is : "  << endl;
    for(int i =0;i<2;i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}


void match(int *tab , int target , int*ans,int number){
    int temp;

    bool *checker = new bool[number];
    for (int i = 0 ; i<number ; i++){
        checker[i] = false;
    }

    for (int i = 0 ; i < number-1;i++){

        for(int j=i+1; j< number ; j++){

            temp = tab[i]+tab[j];
            if(temp == target){
                checker [i] = true;
                checker [j] = true;
            }
        }
    }

    cout << "checker is :";
    for(int i=0;i<number;i++){
        cout << checker[i] <<" ";
    }
    cout << endl;

    for (int i = 0 ; i<number ;i++){

        if(checker[i]) {
            for (int j = 0; j < 2; j++) {

                if (ans[j] == -1) {
                    ans[j] = i;
                    break;
                }
            }
        }
    }

return ;
}