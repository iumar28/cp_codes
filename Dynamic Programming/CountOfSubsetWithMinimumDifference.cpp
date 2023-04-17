#include <bits/stdc++.h>
using namespace std;
int minimumDifference(vector<int> &nums)
{
    int sum = 0;
    int n = nums.size();
    if (n == 0)
    {
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (j == 0)
            {
                dp[i][j] = 1;
            }
            if (i == 0)
            {
                if (j != 0)
                {
                    dp[i][j] = 0;
                }
            }
            if (nums[i - 1] <= sum)
            {
                dp[i][j] = (dp[i - 1][j] || dp[i - 1][j - nums[i - 1]]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    int half = sum / 2, mini = INT_MAX;
    for (int i = 0; i <= half; i++)
    {

        if (dp[n][i] == 1)
        {
            mini = min(mini, sum - (2 * i));
        }
    }
    return mini;
}

int main()
{
    vector<int> v = {1, 6, 5, 11};
    cout << minimumDifference(v);
}