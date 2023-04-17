#include <bits/stdc++.h>
using namespace std;

int knapsack(vector<int> &weight, vector<int> &value, int W, int n, vector<vector<int>> &dp)
{
    if (n == 0 || W == 0)
    {
        return 0;
    }
    if (dp[n][W] != -1)
    {
        return dp[n][W];
    }
    if (weight[n - 1] <= W)
    {
        return dp[n][W] = max(value[n - 1] + knapsack(weight, value, W - weight[n - 1], n - 1, dp), knapsack(weight, value, W, n - 1, dp));
    }
    return dp[n][W] = knapsack(weight, value, W, n, dp);
}

int main()
{
    vector<int> value = {60, 100, 120};
    vector<int> weight = {10, 20, 30};
    int W = 50;
    int n = value.size();
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, -1));
    cout << knapsack(weight, value, W, value.size(), dp);
}