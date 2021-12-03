#include "triangle_classlib.h"

Triangle::Triangle() {
    edge1 = 6;
    edge2 = 8;
    edge3 = 10;
}

Triangle::Triangle(double e1, double e2, double e3) : edge1(e1), edge2(e2), edge3(e3){

}

double Triangle::area() {
    double s = (edge1 + edge2 + edge3)/2;
    double ans = s*(s-edge1)*(s-edge2)*(s-edge3);
    ans = sqrt(ans);
    return ans;
}

bool Triangle::istri() {
    bool ans = true;
    if((edge1+edge2)<=edge3){
        ans = false;
    }
    else if((edge2+edge3)<=edge1){
        ans = false;
    }
    else if((edge1+edge3)<=edge2){
        ans = false;
    }
    return ans;
}

double Triangle::perimeter() {
    double ans = edge1 + edge2 + edge3;
    return ans;
}

Triangle Triangle::compare(Triangle obj){

    if(this -> area() > obj.area()){
        return *this;
    }
    else{
        return obj;
    }
}
