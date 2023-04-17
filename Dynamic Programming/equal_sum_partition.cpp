#include <bits/stdc++.h>
using namespace std;

bool subsetsum(vector<int> &nums, int sum)
{
    int n = nums.size();
    int dp[n + 1][sum + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (i == 0)
            {
                dp[i][j] = 0;
            }
            if (j == 0)
            {
                dp[i][j] = 1;
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
    return dp[n][sum];
}

bool canPartition(vector<int> &nums)
{
    int sum = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }
    if (sum & 1)
    {
        return false;
    }

    return subsetsum(nums, sum / 2);
}

int main()
{
    vector<int> v = {1, 2, 3, 5};
    cout << canPartition(v);
}