#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int m = 0;
int n = 0;

int main(void){

for(int i = 1; i <= 9; i++){
    for(int j = 0; j <= 9;j++){
        for(int k = 0; k <= 9;k++){

            m = i*100 + j*10 + k;
            n = pow(i,3) + pow(j,3) + pow(k,3);

            if(m==n){
                printf("%d\n",m);
            }
        }
    }
}
return 0;
}
