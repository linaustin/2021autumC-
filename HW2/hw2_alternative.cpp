#include <iostream>

using namespace std;

class  term{
public:
    term(float initCoef = 0, int initExp = 0);
    void set(float newCoef, int newExp);

    friend class polynomial;

private:
    float coef;
    int exp;
};

class polynomial{
public:
    polynomial();
    polynomial Add(polynomial input);
    int getDegree();
    float Eval(float x);
    void newTerm(float newCoef, int newExp);
    void print();

private:
    term termArray[5];
    int terms;
};

int main(){

    int terms , inputCoef, inputExp;

    polynomial A;
    cout << "input Polynomial A:" <<endl;
    cout << "number of terms you want to enter : " << endl;
    cin >> terms;
    for(int i = 0; i < terms; i++){
        cout << "input " << i+1 << "'s term coef and power :" <<endl;
        cin >> inputCoef >> inputExp;
        A.newTerm(inputCoef,inputExp);
    }

    polynomial B;
    cout << "input Polynomial B:" <<endl;
    cout << "number of terms you want to enter : " << endl;
    cin >> terms;
    for(int i = 0; i < terms; i++){
        cout << "input " << i+1 << "'s term coef and power :" <<endl;
        cin >> inputCoef >> inputExp;
        B.newTerm(inputCoef,inputExp);
    }

    cout <<endl;

    cout << "A : " <<endl;
    A.print();
    cout << "B : " << endl;
    B.print();

    cout << endl;

    cout << "A.add(B) :" <<endl;
    polynomial C = A.Add(B);
    C.print();
    cout <<endl;

    cout << "A.Eval(2) :" <<endl;
    cout << A.Eval(2) <<endl;
    cout <<endl;

    cout << "A.getDegree() :" << endl;
    cout << A.getDegree() <<endl;

    return 0;
}

term::term(float initCoef, int initExp):coef(initCoef), exp(initExp) {

}

void term::set(float newCoef, int newExp) {
    coef = newCoef;
    exp = newExp;
}

polynomial::polynomial() : terms(0){
    for(int i = 0; i < 5; i++){
        termArray[i].exp = 0;
        termArray[i].coef = 0;
    }
}

polynomial polynomial::Add(polynomial input) {
    polynomial ans;
    for(int i = 0; i < this->terms; i++){
        ans.newTerm(this->termArray[i].coef, this->termArray[i].exp);
    }
    for(int i = 0; i < input.terms; i++){
        ans.newTerm(input.termArray[i].coef,input.termArray[i].exp);
    }

    return ans;
}

int polynomial::getDegree() {
    int deg = 0;
    for(int i = 0; i < 5; i++){
        if(termArray[i].exp > deg) {
            deg = termArray[i].exp;
        }
    }
    return deg;
}

float polynomial::Eval(float x) {
    float ans = 0;
    float temp ;

    for(int i = 0; i < terms; i++){
        temp =  1;

        for(int j = 0; j < termArray[i].exp; j++){
            temp = temp * x;
        }

        temp = temp * termArray[i].coef;
        ans += temp;
    }

    return ans;
}

void polynomial::newTerm(float newCoef, int newExp) {

    for(int i = 0; i < 5; i++){
        if(termArray[i].exp == newExp){
            termArray[i].coef += newCoef;
            break;
        }
        else if(i == terms){
            termArray[i].coef = newCoef;
            termArray[i].exp = newExp;
            break;
        }
    }

    for(int i = 0; i < terms; i++){
        if(termArray[terms-i].exp > termArray[terms-i-1].exp){
            term temp(termArray[terms-i].coef, termArray[terms-i].exp);
            termArray[terms-i].set(termArray[terms-i-1].coef, termArray[terms-i-1].exp);
            termArray[terms-i-1] = temp;
            delete &temp;
        }
    }

    terms = 0;
    for(int i = 0; i < 5; i++){
        if(termArray[i].coef != 0){
            terms += 1;
        }
    }

    return;
}

void polynomial::print() {
    for(int i = 0; i < terms; i++){
        if(i != 0){
            cout << "+ ";
        }
        if(termArray[i].exp == 0){
            cout << termArray[i].coef;
        }
        else{
            cout << termArray[i].coef << "x^" << termArray[i].exp << " ";
        }
    }
    cout <<endl;

    return;
}