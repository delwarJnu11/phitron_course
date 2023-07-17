#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int x,y;
    cin>>x>>y;

    long long int sum = x+y;
    long long int multi = x*y;
    long long int sub = x-y;

    cout<<x<<" + "<<y<<" = "<<sum<<endl; 
    cout<<x<<" * "<<y<<" = "<<multi<<endl; 
    cout<<x<<" - "<<y<<" = "<<sub<<endl;
    return 0;
}
// #include<bits/stdc++.h>

// using namespace std;
// int main()
// {
//      long long int n,m;
//     cin>>n>>m;
//     long long int sum=n+m;
//     long long int mul=n*m;
//     long long int sub=n-m;
//     cout <<n << " + " <<  m << " = " << sum<<endl;
//     cout <<n << " * " <<  m << " = " << mul<<endl;
//     cout <<n << " - " <<  m << " = " << sub<<endl; 
//     return 0;
// }