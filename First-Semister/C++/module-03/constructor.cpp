#include <bits/stdc++.h>
using namespace std;

//create student class
class Student{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        Student(char *n, int r,int c,char s){
            strcpy(name,n);
            roll=r;
            cls=c;
            section=s;
        }
};

int main(){
    Student karim("Karim Uddin",29,10,'a');
    Student solim("Solim Uddin",39,9,'c');

    //print student data
    cout<<"Name: "<<solim.name<<endl;
    cout<<"Roll: "<<solim.roll<<endl;
    cout<<"Class: "<<solim.cls<<endl;
    cout<<"Section: "<<solim.section<<endl;
    return 0;
}