#include <iostream>
#include <string>

using namespace std;


string lowerToUpper(string in);


int main(void){

string input;
string output;

cout << " enter a word:"<<endl;
cin >> input;

output = lowerToUpper ( input);

cout << "ans is : "<<output<<endl;

return 0;
}



string lowerToUpper(string in){

int len = in.size();

for(int i=0 ; i<len;i++){

    in[i]= in[i]-32;
}

return in;
}
