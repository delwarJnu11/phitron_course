#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &v, int mid, int l, int r)
{
    int left_size = mid - l + 1;
    // int left[left_size + 1];
    vector<int> left(left_size);

    int right_size = r - mid;
    // int right[right_size + 1];
    vector<int> right(right_size);

    int i = l, j = 0;
    while (i <= mid)
    {
        left[j] = v[i];
        i++;
        j++;
    }
    i = mid + 1;
    j = 0;
    while (i <= r)
    {
        right[j] = v[i];
        i++;
        j++;
    }
    // for (int i = l, j = 0; i <= mid; i++, j++)
    // {
    //     left[j] = v[i];
    // }
    // for (int i = mid + 1, j = 0; i <= r; i++, j++)
    // {
    //     right[j] = v[i];
    // }

    left[left_size] = INT_MAX;
    right[right_size] = INT_MAX;

    int lp = 0, rp = 0;
    for (int i = l; i <= r; i++)
    {
        if (left[lp] <= right[rp])
        {
            v[i] = left[lp];
            lp++;
        }
        else
        {
            v[i] = right[rp];
            rp++;
        }
    }
}

void mergeSort(vector<int> &v, int l, int r)
{
    if (l == r)
        return;
    int mid = (l + r) / 2;
    mergeSort(v, l, mid);
    mergeSort(v, mid + 1, r);
    merge(v, mid, l, r);
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
    mergeSort(v, 0, v.size() - 1);
    for (auto val : v)
    {
        cout << val << " ";
    }
    return 0;
}