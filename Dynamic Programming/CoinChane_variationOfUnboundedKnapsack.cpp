// Link: https://leetcode.com/problems/coin-change/
#include <bits/stdc++.h>
using namespace std;

int helper(vector<vector<int>> dp, vector<int> &coins, int amount, int index)
{
    if (amount == 0 || index == 0)
    {
        return 0;
    }
    if (amount < 0)
    {
        return -1;
    }
    if (dp[index][amount] != -1)
    {
        return dp[index][amount];
    }

    if (coins[index - 1] <= amount)
    {
        dp[index][amount] = max(coins[index - 1] + helper(dp, coins, amount - coins[index - 1], index), helper(dp, coins, amount, index - 1));
    }
    else

    {
        dp[index][amount] = helper(dp, coins, amount, index - 1);
    }
    return dp[index][amount];
}
int coinChange(vector<int> &coins, int amount)
{
    int n = coins.size();
    vector<vector<int>> dp(n + 1, vector<int>(amount + 1, -1));
    return helper(dp, coins, amount, 0);
}

int main()
{
    vector<int> v = {1, 2, 5};
    cout << coinChange(v, 11);
}