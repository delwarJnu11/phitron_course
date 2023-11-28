#include <bits/stdc++.h>
using namespace std;

int knapsack(int n, int s, int value[], int weight[])
{
    if (n == 0 || s == 0)
        return 0;

    if (weight[n - 1] <= s)
    {
        int option1 = knapsack(n - 1, s - weight[n - 1], value, weight) + value[n - 1];
        int option2 = knapsack(n - 1, s, value, weight);

        return max(option1, option2);
    }
    else
    {
        return knapsack(n - 1, s, value, weight);
    }
}

int main()
{
    int n;
    cin >> n;
    int value[n], weight[n];

    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    int s;
    cin >> s;
    cout << knapsack(n, s, value, weight);
    return 0;
}