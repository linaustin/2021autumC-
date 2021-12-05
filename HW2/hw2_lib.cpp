#include "hw2_lib.h"

term::term(float initCoef, int initExp):coef(initCoef), exp(initExp) {

}

void term::set(float newCoef, int newExp) {
    coef = newCoef;
    exp = newExp;
    return;
}

polynomial::polynomial(int termNumber) {
    termArray = new term[termNumber];
    terms = 0;
    arrayLen = termNumber;
}

int polynomial::getDegree() {
    int deg = 0;
    for(int i = 0; i < this -> arrayLen; i++){
        if(termArray[i].exp > deg){
            deg = termArray[i].exp;
        }
    }

    return deg;
}

float polynomial::Eval(float x) {

    float ans = 0;
    for(int i = 0; i < arrayLen; i++){

        float temp = 1;
        for(int j = 0; j < termArray[i].exp; j++){
            temp = temp * x;
        }

       temp = temp * termArray[i].coef;
       ans += temp;
    }

    return ans;
}

void polynomial::newTerm(float newCoef, int newExp){

    for(int i = 0; i < arrayLen; i++){
        if(termArray[i].exp == newExp){
            termArray[i].coef += newCoef;
        }
    }

    for(int i = 0; i < arrayLen; i++){
        if(termArray[i].coef == 0){}
        termArray[i].exp = newExp;
        termArray[i].coef = newCoef;
    }

    float tempCoef;
    int tempExp;

    for(int i = 0; i < arrayLen; i++){
        for(int j = arrayLen-1; j > i; j--){
            if((termArray[j].coef != 0) && (termArray[j].exp>termArray[j-1].exp)) {
                tempCoef = termArray[j].coef;
                tempExp = termArray[j].exp;
                termArray[j].set(termArray[j - 1].coef,termArray[j-1].coef);
                termArray[j - 1].set(tempCoef,tempExp);
            }
        }
    }

    delete &tempExp,&tempCoef;
    
    return;
}
