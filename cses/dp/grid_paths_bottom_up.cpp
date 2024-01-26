#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[1002][1002];
ll const mod = 1e9 + 7;

ll iterative(int n, vector<vector<char>> &grid)
{
    int val = 1;
    // first row
    for (int i = 0; i < n; i++)
    {
        if (grid[0][i] == '*')
            val = 0;

        dp[0][i] = val;
    }

    val = 1;
    // first col
    for (int j = 0; j < n; j++)
    {
        if (grid[j][0] == '*')
            val = 0;

        dp[j][0] = val;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == '*')
            {
                dp[i][j] = 0;
                continue;
            }
            if (i > 0 && j > 0)
                dp[i][j] = (dp[i - 1][j] % mod + dp[i][j - 1] % mod) % mod;
        }
    }
    return dp[n - 1][n - 1];
}

int main()
{
    int n;
    cin >> n;
    vector<vector<char>> grid(n, vector<char>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }
    cout << iterative(n, grid);
}