#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> value = {60, 100, 120};
    vector<int> weight = {10, 20, 30};
    int n = value.size();
    int W = 50;
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, -1));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else
            {
                if (weight[i - 1] <= W)
                {
                    dp[i][j] = max(value[i - 1] + dp[i - 1][W - weight[i - 1]], dp[i - 1][j]);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}