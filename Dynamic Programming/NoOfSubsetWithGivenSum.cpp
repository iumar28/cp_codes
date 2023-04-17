#include <bits/stdc++.h>
using namespace std;

int helper(vector<int> &v, int sum)
{
    int n = v.size();
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < sum; j++)
        {
            if (v[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - v[i - 1]];
            }
        }
    }
    return dp[n][sum];
}

int main()
{
    vector<int> v = {5,5,5,4,4,4,4,3,3,3,3};
    int sum = 12;
    cout << helper(v, sum);
}