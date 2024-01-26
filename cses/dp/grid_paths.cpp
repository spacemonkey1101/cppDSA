#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[1002][1002];
ll const mod = 1e9 + 7;

ll rec(int i, int j, int n, vector<vector<char>> &grid)
{
    // pruning
    if (i == n || j == n || grid[i][j] == '*')
    {
        return 0;
    }
    // base
    if (i == n - 1 && j == n - 1)
    {
        return 1;
    }

    // memoize
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    // transition
    ll ans = 0;
    ans = (ans % mod + rec(i + 1, j, n, grid) % mod) % mod;
    ans = (ans % mod + rec(i, j + 1, n, grid) % mod) % mod;

    // save and return
    return dp[i][j] = ans;
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
    memset(dp, -1, sizeof(dp));
    cout << rec(0, 0, n, grid);
}