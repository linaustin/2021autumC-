#include <iostream>
#include "kendo.h"

using namespace std;

int main()
{
    kendo table;
    member input_data;
    string input_str;
    char mode;

    while(true){
        cout << "a : add member, b : delet member, c : output csv q: quit program" <<endl;
        cout << "mode choose : " << endl;
        cin >> mode;
        cin.get();

        if(mode == 'a'){

            table.add_member();
        }

        else if(mode == 'b'){
            table.delete_member();
        }

        else if(mode == 'c'){
            table.set_graduates_size();
            table.set_graduates();
            table.read_memberarr();
            table.chose_member();
            table.output_insuarance();
            table.delete_memberarr();
        }

        else if(mode == 'q'){
            break;
        }

        else{
            continue;
        }
    }
    return 0;
}


