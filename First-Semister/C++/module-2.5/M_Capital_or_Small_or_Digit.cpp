#include <bits/stdc++.h>
using namespace std;

int main(){
    char X;
    cin>>X;
    if(X >= 'A' && X <= 'Z'){
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    } else if(X >= 'a' && X <= 'z'){
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }else if(X >= 48 && X <= 57){
        cout<<"IS DIGIT";
    }
    return 0;
}