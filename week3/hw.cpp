 #include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){
	int i,j,n[4];
	srand(time(NULL));
	for(i=1;i<=4;i++){

		do{
		n[i-1]=rand()%10;
			if(n[0]==0){
				break;
			}
		for(j=1;j<i;j++){
			if(n[i-1]==n[j-1]){
				break;
				}
			}
		}while(j!=i);
		cout<<n[i-1];


	}
	return 0;
}
