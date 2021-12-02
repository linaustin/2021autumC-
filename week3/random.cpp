#include<iostream>
#include<stdlib.h>
#include<time.h>


using namespace std;

int randomFour();

int main(void){

while(true){
    cout<<"random is "<<randomFour()<<endl;
    cout << endl;
    system("pause");
    }

return 0;
}


int randomFour(){

srand (time(NULL));


int ans[4]={-1};
int temp =0;
bool check = true;
int result =0;

int i=0;
while(i<4){

    check = true;
    //cout << "i is :"<<i<<endl;
    temp = rand()%10;
    //cout << "temp is  " << temp<<endl;

    if (i==0){
        if(temp!=0){
            ans[i]=temp;
            //cout<< "ans[0]  "<< ans[i]<<endl;
            i+=1;
        }
    }

    else{

        for (int k=0;k<i;k++){
            if(ans[k] == temp){
                check = false;
               //cout << "ans[" << k << "] " << ans[k] << "temp is  "<< temp << "i is "<< i<<endl;
            }
        }

        if(check){
            ans[i]=temp;
            //cout << "ans[" << i << "] " << ans[i]<<endl;
            i+=1;
        }
    }
    //system("pause");
}

for(i=0;i<4;i++){
    result=result*10;
    result += ans[i];
}
//cout << "result is "<<result<<endl;
return result;

}
