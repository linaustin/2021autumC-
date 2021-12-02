#include <iostream>

using namespace std;

int main()
{

while(true){
    int userInput = 0;

    cout << "enter a number : ";
    cin >> userInput;

    int n = userInput;
    int ans[10];
    int i;

    for(i=0; n>0;i++){

        ans[i]=n%2;
        n= n/2;
    }


    cout << "binary of " << userInput << " is :";

    for(i=i-1 ; i >= 0 ; i--){
        cout << ans[i];
    }

    cout << endl;
    cout << endl;

}

    return 0;
}
