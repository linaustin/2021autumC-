#include<iostream>
#include<time.h>

using namespace std;

void find_max(int *arr,int *ans);

int main(void){


int arr1[3]={0};
int temp;
int result =0;
srand(time(NULL));

int i = 0;
while(i<3){

 temp = rand()%10;
 bool check = true;

 for(int k =0;k<i;k++){
    if(arr1[k]==temp){
        check = false;
    }
 }

 if(check){
    arr1[i] = temp;
    i+=1;
 }
}


cout <<"arrary is : "<< endl;
for (int i=0;i<3;i++){
    cout << arr1[i] <<" ";
}
cout << endl;

//
cout<< "result is : " << result << endl;

find_max(arr1,&result);
cout << "max number is :"<< result << endl;


return 0;
}

void find_max(int *arr,int *ans){

int maxnum = 0;

for (int i=0;i<3;i++){
    if(arr[i]>maxnum){
        maxnum=arr[i];
    }

}

*ans = maxnum;

return;
}
