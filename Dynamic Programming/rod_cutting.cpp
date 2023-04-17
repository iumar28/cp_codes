#include <bits/stdc++.h>
using namespace std;
// int dp[9][9]
// vector<vector<int>> dp(9, vector<int>(9, 0));

int ans(vector<vector<int>> &dp, vector<int> &price, vector<int> &length, int max_len, int index)
{
    if (max_len == 0 || index == 0)
    {
        return 0;
    }
    if (dp[index][max_len] != -1)
    {
        return dp[index][max_len];
    }

    if (length[index - 1] <= max_len)
    {
        dp[index][max_len] = max(price[index - 1] + ans(dp, price, length, max_len - length[index - 1], index), ans(dp, price, length, max_len, index - 1));
    }
    else
    {
        dp[index][max_len] = ans(dp, price, length, max_len, index - 1);
    }
    return dp[index][max_len];
}

int main()
{
    vector<int> price = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = price.size();
    vector<int> length(n);
    for (int i = 0; i < n; i++)
    {
        length[i] = i + 1;
    }
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));

    cout << ans(dp, price, length, price.size(), price.size());
}