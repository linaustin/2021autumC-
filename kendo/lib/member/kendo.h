#ifndef KENDO_H
#define KENDO_H

#include"member.h"
#include "../jsoncpp/include/json/json.h"
#include<fstream>
#include<cstdlib>

using namespace std;

class kendo{
public:

    kendo();

    void set_graduates_size();
    void set_graduates();
    void chose_member();

    void read_memberarr();
    void delete_memberarr();

    void add_member();
    void delete_member();

    void output_insuarance();




private:

    int graduates_size;
    string *graduates;
    int *graduates_number;

    member **memberarr;

    ofstream  out_database;
    ifstream in_database;

    ofstream out_csv;

    Json::Reader reader;
    Json::Value root;
    Json::StyledWriter writer;
};

#endif // KENDO_H


