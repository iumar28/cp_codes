#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generateMatrix(int n)
{
    vector<vector<int>> v(n, vector<int>(n));
    int r1 = 0, r2 = n - 1;
    int c1 = 0, c2 = n - 1;
    int count = 1;

    while (r1 <= r2 && c1 <= c2)
    {

        // Left to right
        for (int i = c1; i <= c2; i++)
        {
            v[r1][i] = count++;
        }
        // Top to Bottom
        for (int i = r1 + 1; i <= r2; i++)
        {
            v[i][c2] = count++;
        }

        if (r1 < r2 && c1 < c2)
        {
            // Right to left
            for (int i = c2 - 1; i > c1; i--)
            {
                v[r2][i] = count++;
            }

            // Bottom to up
            for (int i = r2; i > r1; --i)
            {
                v[i][c1] = count++;
            }
        }
        ++r1;
        --r2;
        ++c1;
        --c2;
    }
    return v;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> ans = generateMatrix(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}