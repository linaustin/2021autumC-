#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

void eliminate(int *competitor, int k);
int playerNumber = 0;

int main(void){
    cout << "enter player number and round number :" << endl;

    int round = 0;
    cin >> playerNumber >> round;

    int *player;
    player = new int[playerNumber];
    for(int i =0 ; i < playerNumber; i++){
        player[i] = i+1;
    }

    eliminate(player,round);

    cout << "Winner is : ";
    for(int i = 0; i < playerNumber; i++) {
        if (player[i] != -1) {
            cout << player[i] << " ";
        }
    }
    cout << endl;

    return 0;
}


void eliminate(int *competitor, int k){
    srand(time(NULL));

    int j =0;// 紀錄輪到誰了

    for (int i = 0; i < k; i++){    //淘汰k輪
        int eliminateNumber = rand()%playerNumber+1;
        cout << "eliminate number is : " << eliminateNumber << endl;

        int count = 0;
        while(count < eliminateNumber){
            if(competitor[j] != -1){
                count +=1;  //遇到活人計數1次
            }

            j+=1;
            if(j == playerNumber){
                j = 0;  //數到隊尾要回到前面
            }
        }
        //j是下次開始的人，所以淘汰的是前一個
        if(j != 0) {
            cout << "Out : " << competitor[j - 1];
            competitor[j - 1] = -1;     //被淘汰就把編號改成負數
        }
        else{
            cout << "Out : " << competitor[playerNumber - 1];
            competitor[playerNumber - 1] = -1;
        }
        cout << endl;

        cout << "remain player : ";
        for(int m = 0; m < playerNumber; m++){
            if(competitor[m] != -1){
                cout << competitor[m] << " ";
            }
        }
        cout << endl;
        cout << endl;
    }

    return;
}