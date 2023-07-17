#include <bits/stdc++.h>
using namespace std;

//create class
class Student{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
};

int main(){
    //RAHIM student's Details
    Student rahim;
    char rahim_name[100] = "Rahim";
    strcpy(rahim.name,rahim_name);
    rahim.roll = 9;
    rahim.cls = 6;
    rahim.section = 'A';
    cout<<rahim.name<<endl;
    //KARIM student's Details
    Student karim;
    char karim_name[100] = "Karim";
    strcpy(karim.name,karim_name);
    karim.roll = 90;
    karim.cls = 7;
    karim.section = 'B';
    cout<<karim.name;
    return 0;
}