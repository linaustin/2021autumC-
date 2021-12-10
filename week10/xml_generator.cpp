#include <iostream>
#include "tiny_xml/tinyxml.h"
#include "tiny_xml/tinystr.h"
#include <string>

using namespace std;



class person{
public:
    string id = "0811074";
    string name = "austin";
    string age = "20";
};

void write_Xml(person *input, string file);


int main(){
    person stu1;
    string dir = "C:\\Users\\linau\\Desktop\\computer_programming\\programming\\week10\\myxml.xml";

    write_Xml(&stu1,dir);



    return 0;
}

void write_Xml(person *input, string file){

    TiXmlDocument *myDoc = new TiXmlDocument();
    TiXmlElement *RootElement = new TiXmlElement("persons");

    myDoc ->LinkEndChild(RootElement);

    TiXmlElement *personElement = new TiXmlElement("Person");
    RootElement ->LinkEndChild(personElement);

    personElement -> SetAttribute("ID", input->id.c_str());

    TiXmlElement *nameElement = new TiXmlElement("name");
    TiXmlElement *ageElement = new TiXmlElement("age");

    personElement ->LinkEndChild(nameElement);
    personElement ->LinkEndChild(ageElement);



    TiXmlText *nameContent = new TiXmlText(input -> name.c_str());
    TiXmlText *ageContent = new TiXmlText(input -> age.c_str());
    nameElement->LinkEndChild(nameContent);
    ageElement->LinkEndChild(ageContent);

    myDoc -> SaveFile(file.c_str());

}