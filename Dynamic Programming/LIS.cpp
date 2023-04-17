#include <bits/stdc++.h>
using namespace std;

int ans(vector<int> &v)
{
    int n = v.size();
    vector<int> dp(n, 0);
    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        int maxi = 0;
        for (int j = 0; j < i; j++)
        {
            if (v[j] < v[i])
            {
                if (dp[j] > maxi)
                {
                    maxi = dp[j];
                }
            }
        }
        dp[i] = maxi + 1;
    }
    return dp[n - 1];
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << ans(v);
}