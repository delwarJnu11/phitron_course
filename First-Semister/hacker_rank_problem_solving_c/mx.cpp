#include <bits/stdc++.h>
using namespace std;
//create reusable function max of two numbers 
// int my_max(int a, int b){
//     int mx;
//     if(a>b){
//         mx=a;
//     }else{
//         mx=b;
//     }
//     return mx;
// }

int main(){
    float a,b;
    cin>>a>>b;
    float mx = max(a,b);
    cout<<mx;
    return 0;
}