// Question: Create three static objects with the help of the constructor of the following class.Then compare those 3 objects and print who got the highest math_marks and print his/her name.

#include <bits/stdc++.h>
using namespace std;
//create class for create object
class Student{
        public:
            char name[100];
            int roll;
            char section;
            int math_marks;
            int cls;
        Student(char *n,int r,char sec,int marks,int c){
            strcpy(name,n);
            roll = r;
            section = sec;
            math_marks = marks;
            cls = c;
        }
};

//create Rahim object with function
Student rahim_uddin(){
    char name[100] = "Rahim Uddin";
    Student rahim(name,50,'A',95,8);
    return rahim;
}
//create Kolim object with function
Student kolim_uddin(){
    char name[100] = "Kolim Uddin";
    Student kolim(name,60,'B',90,8);
    return kolim;
}
//create Salim object with function
Student salim_uddin(){
    char name[100] = "Salim Uddin";
    Student salim(name,70,'C',85,8);
    return salim;
}

//main function
int main(){
    Student rahim = rahim_uddin();
    Student kolim = kolim_uddin();
    Student salim = salim_uddin();
    //compare who got highest marks and print his/her name
    if(rahim.math_marks >= kolim.math_marks && rahim.math_marks >= salim.math_marks){
        cout<<rahim.name<<" Got Highest Marks.";
    }else if(kolim.math_marks >= rahim.math_marks && kolim.math_marks >= salim.math_marks){
        cout<<kolim.name<<" Got Highest Marks.";
    }else{
        cout<<salim.name<<" Got Highest Marks.";
    }
    return 0;
}
