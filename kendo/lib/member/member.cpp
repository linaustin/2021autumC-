 #include"member.h"

 member::member(){
     return;
 }
member::member(string inputName){
    name = inputName;
    return;
}

void member::setGraduates(string inputGradutes){
    this->graduates = inputGradutes;
    return;
}

void member::setGrade(string inputGrade){
    this->grade = inputGrade;
    return;
}

void member::setName(string inputName){
    this->name = inputName;
    return;
}

void member::setStudent_id(string input_stu_id){
    this->student_id = input_stu_id;
    return;
}

void member::setID(string inputID){
    this->ID = inputID;
    return;
}

void member::setBirthday(string inputBirthday){
    this->birth_day = inputBirthday;
    return;
}

void member::setBirthYear(string year){
    this->birth_year = year;
    return;
}

void member::setHotelDay1(bool input){
    this->hotel_day1 = input;
    return;
}

void member::setHotelDay2(bool input){
    this->hotel_day2 = input;
    return;
}

string member::getGraduates(){
    return this-> graduates;
}

string member::getGrade(){
    return this->grade;
}
string member::getName(){
    return this->name;
}
string member::getStudent_id(){
    return this->student_id;
}

string member::getID(){
    return this->ID;
}

string member::getBirthday(){
    return this->birth_day;
}

string member::getBirthYear(){
    return this->birth_year;
}

bool member::getHotelDay1(){
    return this->hotel_day1;
}

bool member::getHotelDay2(){
    return this->hotel_day2;
}
