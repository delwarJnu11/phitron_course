// Question: Take an integer array A of size N as input. Then take an integer M as input. You need to take an array B of size M and copy all elements of array A to array B. Delete the array A and then take input of the rest of the elements of array B. After that print array B.
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *a = new int[n];
    //input array A
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    //input Array B
    int *b = new int[m];
    for(int i=0;i<m;i++){
        b[i] = a[i];
    }
    //input rest element of Array B
    for (int i=n;i<m;i++) {
        cin >> b[i];
    }
    //delete array A
    delete[] a;
    //print Array B
    for(int i=0;i<m;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}