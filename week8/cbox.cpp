#include <iostream>

using namespace std;

class Cbox {
private:
    int width = 0;
    int height = 0;

public:
    void set(int w,int h);
    int area();
};



int main(void){

    Cbox box1;
    int wid,he;

    cout << "enter width and height : ";
    cin >> wid >> he;
    box1.set(wid,he);
    cout << "width is : " << box1.area() << endl;

    return 0;
}


int Cbox::area() {
    return  width * height;
}

void Cbox::set(int winput, int hinput) {
    width = winput;
    height = hinput;
    return;
}