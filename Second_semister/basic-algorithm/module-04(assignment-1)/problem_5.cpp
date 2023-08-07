// Question No->5: You are given two sorted arrays arr1 and arr2 in descending order.Your task is to merge these two arrays into a new array result using the merge sort technique, but Instead of merging the arrays in ascending order, you need to merge them in descending order to create the result array.

#include <bits/stdc++.h>
using namespace std;

void mergeSortDecending(vector<int> &v1, vector<int> v2)
{
    int firstSize = v1.size();
    int secondSize = v2.size();
    vector<int> result(firstSize + secondSize);
    int i = 0, j = 0, k = 0;

    while (i < firstSize && j < secondSize)
    {
        if (v1[i] >= v2[j])
        {
            result[k] = v1[i];
            i++;
        }
        else
        {
            result[k] = v2[j];
            j++;
        }
        k++;
    }

    while (i < firstSize)
    {
        result[k] = v1[i];
        i++;
        k++;
    }

    while (j < secondSize)
    {
        result[k] = v2[j];
        j++;
        k++;
    }
    for (auto val : result)
    {
        cout << val << " ";
    }
}
int main()
{
    vector<int> v1;
    vector<int> v2;
    int n, m;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    cin >> m;
    while (m--)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }
    mergeSortDecending(v1, v2);
    return 0;
}