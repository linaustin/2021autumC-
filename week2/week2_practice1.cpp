#include <iostream>

using namespace std;

int dateCalculate (int m,int d);

int main(void){

while (true){
    int month = 0, day = 0;

    cout << "enter a date :" ;
    cin >> month >> day ;

    cout << "the ans is :" << dateCalculate(month,day) << endl;
    cout << endl;
}

return 0;

}

int dateCalculate(int m,int d){

int days[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
int ans =0;

for(int i = 0 ; i< m-1;i++){
        ans += days[i];
    }

ans += d;
return ans;

}
