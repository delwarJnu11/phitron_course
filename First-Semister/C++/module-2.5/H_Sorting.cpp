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
    //sorting with selection sort
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]); //swap using built-in function 
            }
        }
    }
    //print array after sorting
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}