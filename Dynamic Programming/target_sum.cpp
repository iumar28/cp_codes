#include <bits/stdc++.h>
using namespace std;
int CountOfSubsetWithGivenSum(vector<int> &v, int sum)
{
    int n = v.size();
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
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

int findTargetSumWays(vector<int> &v, int target)
{
    int n = v.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    if (sum < target || (sum - target) & 1)
    {
        return 0;
    }
    int s1 = (sum + target) / 2;
    int s2 = (sum - s1);
    return CountOfSubsetWithGivenSum(v, s1);
}
int main()
{
    vector<int> v = {7, 9, 3, 8, 0, 2, 4, 8, 3, 9};
    int target = 0;
    cout << findTargetSumWays(v, target);
}