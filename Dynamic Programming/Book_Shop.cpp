#include <bits/stdc++.h>
using namespace std;
#define int long long
/*-----------------------------------------------SOLVE-----------------------------------------------------------------------------------*/
int ans(vector<int> &price, vector<int> &pages, int sum)
{
    int n = price.size();
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (price[i - 1] <= j)
            {
                dp[i][j] = max(dp[i - 1][j], pages[i - 1] + dp[i - 1][j - price[i - 1]]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][sum];
}
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> price(n), pages(n);
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> pages[i];
    }
    cout << ans(price, pages, x);
}
/*-------------------------------------------------THE MAIN FUNCTION-------------------------------------------------------------*/
int32_t main()
{
    int test = 1;

    while (test--)
    {
        solve();
    }
    return 0;
}
