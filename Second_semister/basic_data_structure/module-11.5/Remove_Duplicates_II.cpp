#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> my_linked_list;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        my_linked_list.push_back(val);
    }
    my_linked_list.sort();
    my_linked_list.unique();
    for (int val : my_linked_list)
    {
        cout << val << " ";
    }

    return 0;
}