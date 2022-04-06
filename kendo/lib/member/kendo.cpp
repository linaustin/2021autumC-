#include "kendo.h"

kendo::kendo(){
    in_database.open("C:\\Users\\linau\\Desktop\\kendo\\data\\database.json",ios::binary);
    reader.parse(in_database,root,false);
    in_database.close();
}

void kendo::set_graduates_size(){
    cout << "總共有幾屆的成員?" <<endl;
    cin >> graduates_size;
    cin.get();
}

void kendo::set_graduates(){
    graduates = new string[graduates_size];
    graduates_number = new int[graduates_size];

    for(int i = 0; i < graduates_size; i++){
        cout << "第" << i+1 << "屆為:" <<endl;
        getline(cin,graduates[i]);
    }

    for(int i = 0; i < graduates_size; i++){
        graduates_number[i] = root[graduates[i]].size();
    }
    return;
}

void kendo::chose_member(){
   string input;

    for(int i = 0; i < graduates_size; i++){
        cout << "第" << graduates[i] << "屆:" << endl;


        for(int j = 0; j < graduates_number[i]; j++){
                cout << memberarr[i][j].getName() << " is chosen (y//n) : " <<endl;

                getline(cin,input);

                if(input == "y"){
                        memberarr[i][j].chosen = true;
                }
        }
    }
    return;
}

void kendo::read_memberarr(){
    in_database.open("C:\\Users\\linau\\Desktop\\kendo\\data\\database.json",ios::binary);
    reader.parse(in_database,root,false);
    in_database.close();

    memberarr = new member*[graduates_size];

    for(int i = 0; i < graduates_size; i++){
        memberarr[i] = new member[graduates_number[i]];
    }

    for(int i = 0; i < graduates_size; i++){
        for(int j = 0; j < graduates_number[i]; j++){
            memberarr[i][j].setGraduates(graduates[i]);
            memberarr[i][j].setGrade(root[graduates[i]][j]["grade"].asString());
            memberarr[i][j].setName(root[graduates[i]][j]["name"].asString());
            memberarr[i][j].setStudent_id(root[graduates[i]][j]["student_id"].asString());
            memberarr[i][j].setID(root[graduates[i]][j]["ID"].asString());
            memberarr[i][j].setBirthday(root[graduates[i]][j]["birth_day"].asString());
            memberarr[i][j].setBirthYear(root[graduates[i]][j]["birth_year"].asString());
        }
    }
    for(int i = 0; i < graduates_size; i++) {
        cout << "第" << graduates[i] << "屆成員有: " <<endl;
        for (int j = 0; j < graduates_number[i]; j++) {
            cout << memberarr[i][j].getName() << ", ";
        }
        cout << endl;
    }

    return;
}

void kendo::delete_memberarr(){
    delete memberarr;
    return;
}

void kendo::add_member(){

    in_database.open("C:\\Users\\linau\\Desktop\\kendo\\data\\database.json",ios::binary);
    reader.parse(in_database,root,false);
    in_database.close();

    member input_member;
    string input_str;

    cout << "enter student's name :" << endl;
    getline(cin,input_str);
    input_member.setName(input_str);

    cout << "enter sutdent's birth_year :" << endl;
    getline(cin,input_str);
    input_member.setBirthYear(input_str);

    cout << "enter student's birth_day :" <<endl;
    getline(cin,input_str);
    input_member.setBirthday(input_str);

    cout << "enter student's graduates :" << endl;
    getline(cin,input_str);
    input_member.setGraduates(input_str);

    cout << "enter student's grade :" <<endl;
    getline(cin,input_str);
    input_member.setGrade(input_str);

    cout << "enter student's student_id" <<endl;
    getline(cin,input_str);
    input_member.setStudent_id(input_str);

    cout << "enter student's ID :"<<endl;
    getline(cin,input_str);
    input_member.setID(input_str);



    Json::Value memberItem;
    memberItem["birth_year"] = input_member.getBirthYear();
    memberItem["birth_day"] = input_member.getBirthday();
    memberItem["name"] = input_member.getName();
    memberItem["grade"] = input_member.getGrade();
    memberItem["student_id"] = input_member.getStudent_id();
    memberItem["ID"] = input_member.getID();

    int num = root[input_member.getGraduates()].size();
    string grad = input_member.getGraduates();
    Json::Value temp;
    Json::Value temparr;

    for(int i = 0; i < num; i++){
            temp["name"] = root[grad][i]["name"].asString();
            temp["birth_year"] = root[grad][i]["birth_year"].asString();
            temp["birth_day"] = root[grad][i]["birth_day"].asString();
            temp["grade"] = root[grad][i]["grade"].asString();
            temp["student_id"] = root[grad][i]["student_id"].asString();
            temp["ID"] = root[grad][i]["ID"].asString();

            temparr.append(temp);
            temp.clear();
        }

    temparr.append(memberItem);

    root[grad].clear();
    root[grad]=temparr;

    out_database.open("C:\\Users\\linau\\Desktop\\kendo\\data\\database.json",ios::binary);
    out_database << writer.write(root);
    out_database.close();

    return;
}

void kendo::delete_member(){
    in_database.open("C:\\Users\\linau\\Desktop\\kendo\\data\\database.json",ios::binary);
    reader.parse(in_database,root,false);
    in_database.close();

    string grad, stu_name;

    cout << "輸入想要刪除的屆數:" <<endl;
    getline(cin,grad);

    cout <<"輸入想要刪除的人名:" <<endl;
    getline(cin,stu_name);

    int num = root[grad].size();

    Json::Value temparr;
    Json::Value temp;

    for(int i = 0; i < num; i++){
        if(root[grad][i]["name"].asString() != stu_name){

            temp["name"] = root[grad][i]["name"].asString();
            temp["birth_year"] = root[grad][i]["birth_year"].asString();
            temp["birth_day"] = root[grad][i]["birth_day"].asString();
            temp["grade"] = root[grad][i]["grade"].asString();
            temp["student_id"] = root[grad][i]["student_id"].asString();
            temp["ID"] = root[grad][i]["ID"].asString();

            temparr.append(temp);
            temp.clear();
        }
    }

    root[grad].clear();
    root[grad]=temparr;

    out_database.open("C:\\Users\\linau\\Desktop\\kendo\\data\\database.json", ios::binary);
    out_database << writer.write(root);
    out_database.close();

    return;
}

void kendo::output_insuarance(){

    out_csv.open("C:\\Users\\linau\\Desktop\\kendo\\output\\output.csv", ios::out);
    out_csv << "組別,姓名,年代,世界冠軍,生日,頒獎台次數" <<endl;
    for(int i = 0; i < graduates_size; i++){
        out_csv << graduates[i] << "," << endl;
        for(int j = 0; j < graduates_number[i]; j++){
            if(memberarr[i][j].chosen){
                out_csv << ",";
                out_csv << memberarr[i][j].getName() << ",";
                out_csv << memberarr[i][j].getGrade() << ",";
                out_csv << memberarr[i][j].getStudent_id() << ",";
                out_csv << memberarr[i][j].getBirthYear() << "/" << memberarr[i][j].getBirthday() <<",";
                out_csv << memberarr[i][j].getID() << "," <<endl;
            }
        }
        out_csv <<endl;
    }

    out_csv.close();

    return;
}


