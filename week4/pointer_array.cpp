#include <iostream>
#include <cstdlib>

using namespace std;

void replacearr(int *arr,int pos,int num);

int main(void){

int a[5]={1,2,3,4,5};
int num = 100;

cout <<"before : " << endl;
for (int i=0;i<5;i++){
    cout << a[i] << " ";
}
cout << endl;


replacearr(a,4,num);

cout <<"after : " << endl;
for (int i=0;i<5;i++){
    cout << a[i] << " ";
}
cout << endl;



return 0;
}

void replacearr(int *arr ,int pos , int num){

*(arr+pos-1)=num;

return;

}
