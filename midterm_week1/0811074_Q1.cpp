#include <iostream>

using namespace std;

int main(void){

    cout<< "enter width and height(w/h) :"<<endl;
    int width = 0;
    int height = 0;
    cin >> width >> height;
    height = height+2; //上下還有兩行

    for(int i =0 ; i < height ;i++){

        if(i == 0){     // 第一行要向右平移
            for(int j = 0; j < height-1; j++){
                cout<<" ";
            }
            for(int j = 0; j < width; j++){
                cout<<"-";
            }
            cout << endl;
            continue;   //避免下面取餘數為0時又做一次
        }

        if(i%(height-1) != 0){

            for(int j = 0; j < height-1-i; j++){
                cout<<" ";  //斜線前面的空格
            }

            for(int j = 0; j < width; j++){
                if(j%(width-1) == 0){
                    cout << "/";
                }
                else{
                    cout << " ";
                }
            }

            cout << endl;
        }

        else{   //最後一行不是斜線
            for(int j = 0; j < width; j++){
                cout << "-";
            }
            cout << endl;
        }

    }

    return 0;
}
