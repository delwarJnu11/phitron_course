#include <bits/stdc++.h>
using namespace std;
//create student class
class Student{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
        Student(char *n,int r,int c,char s){
            strcpy(name,n);
            roll=r;
            cls=c;
            section=s;
        }
};
int main(){
    char name[100] = "Rahim Uddin";
    Student *rahim = new Student(name,30,9,'C');
    rahim->roll = 55;
    rahim->cls = 10;

    // print object value
    cout<<rahim->name<<endl;
    cout<<rahim->roll<<endl;
    cout<<rahim->cls<<endl;
    cout<<rahim->section<<endl;
    return 0;
}