#include "0811074_Q2lib.h"

bool istri(struct triangle tri){
    //任兩邊和大於第三邊
    bool check = true;

    if(tri.edge_1 + tri.edge_2 <= tri.edge_3){
        check = false;
    }
    else if(tri.edge_1 + tri.edge_3 <= tri.edge_2){
        check = false;
    }
    else if(tri.edge_2 + tri.edge_3 <= tri.edge_1){
        check = false;
    }

    return check;
}

double area(struct triangle tri){
    //使用海龍公式求面積
    double s = (tri.edge_1 + tri.edge_2 + tri.edge_3)/2;

    double area = s*(s-tri.edge_1)*(s-tri.edge_2)*(s-tri.edge_3);
    area = sqrt(area);

    return area;
}

bool isright(struct triangle tri){
    //檢查是否符合 a^2+b^2 = c^2
    double square1 = tri.edge_1 * tri.edge_1;
    double square2 = tri.edge_2 * tri.edge_2;
    double square3 = tri.edge_3 * tri.edge_3;

    bool check = false;

    if(square1 + square2 == square3){
        check = true;
    }
    else if(square2 + square3 == square1){
        check = true;
    }
    else if(square1 + square3 == square2){
        check = true;
    }

    return  check;
}