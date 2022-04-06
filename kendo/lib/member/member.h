#ifndef MEMBER_H
#define MEMBER_H

#include<iostream>
#include<string>

using namespace std;

class member{
public:

    member();
    member(string inputName);

    void setGraduates(string inputGradutes);
    void setGrade(string inputGrade);
    void setName(string inputName);
    void setStudent_id(string input_stu_id);
    void setID(string inputID);
    void setBirthday(string inputBirthday);
    void setBirthYear(string year);
    void setHotelDay1(bool input);
    void setHotelDay2(bool input);

    string getGraduates();
    string getBirthday();
    string getBirthYear();
    string getGrade();
    string getName();
    string getStudent_id();
    string getID();
    bool getHotelDay1();
    bool getHotelDay2();

    bool chosen = false;

private:

    string graduates;
    string birth_year;
    string birth_day;
    string name;
    string grade;
    string student_id;
    string ID;
    bool hotel_day1 = false;
    bool hotel_day2 = false;

};

#endif // MEMBER_H
