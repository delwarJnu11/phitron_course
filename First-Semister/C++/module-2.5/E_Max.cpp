#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    //input array element
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_num = arr[0];
    //find max from array
    for(int i=0;i<n;i++){
        max_num = max(arr[i],max_num);
    }
    cout<<max_num;
    return 0;
}