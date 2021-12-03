#include "studentScorelib.h"

void Student::set(string inputName, double math, double english) {
    name = inputName;
    mathScore = math;
    englishScore = english;
    return;
}

bool Student::pass(){
    if(mathScore >= 60 && englishScore >= 60){
        return true;
    }
    else{
        return false;
    }
}