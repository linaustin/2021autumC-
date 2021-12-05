#include "hw2_lib.h"

term::term(float initCoef, int initExp):coef(initCoef), exp(initExp) {

}

void term::set(float newCoef, int newExp) {

    coef = newCoef;
    exp = newExp;
    return;
}

float term::getCoef() {

    return coef;
}

int term::getExp() {

    return exp;
}

polynomial::polynomial(string polyID, int termNumber):id(polyID), arrayLen(termNumber) {

    termArray = new term[termNumber];
    terms = 0;
}

polynomial polynomial::Add(polynomial input) {

    polynomial ans("ans",(this->getArrayLen() + input.getArrayLen()));
    string ansID = this->id + " + " + input.id;
    for(int i = 0; i < input.getTerms(); i++){
        ans.newTerm(input.termArray[i].getCoef(), input.termArray[i].getExp());
    }
    for(int i = 0; i < this->getTerms(); i++){
        ans.newTerm(this->termArray[i].getCoef(), this->termArray[i].getExp());
    }

    ans.setid(ansID);

    return ans;
}

int polynomial::getDegree() {

    return termArray[0].getExp();
}

int polynomial::getArrayLen() {

    return arrayLen;
}

int polynomial::getTerms() {

    return terms;
}

float polynomial::Eval(float x) {

    float ans = 0;
    for(int i = 0; i < arrayLen; i++){

        float temp = 1;
        for(int j = 0; j < termArray[i].getExp(); j++){
            temp = temp * x;
        }

        temp = temp * termArray[i].getCoef();
        ans += temp;
    }

    return ans;
}

void polynomial::newTerm(float newCoef, int newExp) {

    bool createTerm = true;
    for(int i = 0; i < arrayLen; i++){
        if(termArray[i].getExp() == newExp){
            termArray[i].set((termArray[i].getCoef() + newCoef),termArray[i].getExp());
            createTerm = false;
            break;
        }
    }

    if(createTerm) {
        for (int i = 0; i < arrayLen; i++) {
            if (termArray[i].getCoef() == 0) {
                termArray[i].set(newCoef, newExp);
                break;
            }
        }
    }

    float tempCoef;
    int tempExp;

    for(int i = 0; i < arrayLen; i++){
        for(int j = arrayLen-1; j > i; j--){
            if((termArray[j].getCoef() != 0) && (termArray[j].exp>termArray[j-1].exp)) {
                tempCoef = termArray[j].getCoef();
                tempExp = termArray[j].getExp();
                termArray[j].set(termArray[j - 1].getCoef(),termArray[j-1].getExp());
                termArray[j - 1].set(tempCoef,tempExp);
            }
        }
    }

    terms = 0;
    for(int i = 0; i < arrayLen; i++){
        if(termArray[i].getCoef() != 0){
            terms = terms + 1;
        }
    }

    return;
}

void polynomial::setid(string inputID) {

    id = inputID;
    return;
}

void polynomial::print() {

    cout << id << " : ";
    for(int i = 0; i < terms; i++){
        if((termArray[i].getExp() != 0) && (termArray[i].getCoef() != 0)){
            cout << termArray[i].getCoef() << "x^" << termArray[i].getExp() << " ";
        }
        else if(termArray[i].getCoef() != 0){
            cout << termArray[i].getCoef() << " ";
        }

        if( i != terms-1){
            cout << "+ ";
        }
    }

    cout << endl;
}

