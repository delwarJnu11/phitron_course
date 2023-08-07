#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &v, int first, int last)
{
    int pivot = v[last];
    int i = last - 1;
    int j = first;
    for (j = first; j < last; j++)
    {
        if (v[j] < pivot)
        {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[last]);
    return i + 1;
}
void quickSort(vector<int> &v, int first, int last)
{
    if (first >= last)
        return;
    int pivot = partition(v, first, last);
    quickSort(v, first, pivot - 1);
    quickSort(v, pivot + 1, last);
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    quickSort(v, 0, v.size());
    for (auto val : v)
    {
        cout << val << " ";
    }
    return 0;
}