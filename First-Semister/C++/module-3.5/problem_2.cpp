// Question: Create a dynamic object named dhoni of the following class. Don’t use a constructor here, that means you need to fill the data by yourself.Then make another dynamic object named kohli and copy the data of the dhoni object to kohli and after that delete the dhoni object. Then print the jersey_no and country of kohli object.

#include <bits/stdc++.h>
using namespace std;
//create cricketer Class
class Cricketer{
    public:
        int jersey_no;
        char country[50];
};

int main(){
    //create dynamic object ans assign value
    Cricketer *dhoni = new Cricketer;
    char country_name[50]="India";
    dhoni->jersey_no = 7;
    strcpy(dhoni->country,country_name);
    //create dynamic object and copy dhoni's data to kohli
    Cricketer *kholi = new Cricketer;
    kholi->jersey_no = dhoni->jersey_no;
    strcpy(kholi->country,dhoni->country);
    //delete dhoni data
    delete dhoni;
    //print kohli data that copied form dhoni object
    cout<<kholi->jersey_no<<endl;
    cout<<kholi->country<<endl;
    return 0;
}