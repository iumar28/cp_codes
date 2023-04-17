#include <bits/stdc++.h>
using namespace std;

int knapsack(vector<int> &value, vector<int> &weight, int W, int n)
{
    if (n == 0 || W == 0)
    {
        return 0;
    }

    if (weight[n - 1] <= W)
    {
        return max(value[n - 1] + knapsack(value, weight, W - weight[n - 1], n - 1), knapsack(value, weight, W, n - 1));
    }
    return knapsack(value, weight, W, n);
}

int main()
{
    vector<int> value = {60, 100, 120};
    vector<int> weight = {10, 20, 30};
    int W = 50;
    cout << knapsack(value, weight, W, value.size());
}