#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<long long> dp2(10000001, INT_MAX);
long long topdown(long long target, int *coins, int n)
{
    // base case
    if (target == 0)
    {
        return 0;
    }
    // dp
    if (dp2[target] != INT_MAX)
        return dp2[target];

    for (int j = 0; j < n; j++)
    {
        if (target - coins[j] >= 0)
        {
            dp2[target] = min(dp2[target], 1 + topdown(target - coins[j], coins, n));
        }
    }
    return dp2[target];
}

long long bottomup(int target, int *coins, int n)
{
    vector<long long> dp(target + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= target; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - coins[j] >= 0)
            {
                dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
            }
        }
    }

    if (dp[target] == INT_MAX)
    {
        return -1;
    }
    return dp[target];
}
int main()
{
    int n, target;
    cin >> n >> target;
    int coins[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    long long res = topdown(target, coins, n);
    if (res == INT_MAX)
    {
        cout << -1;
    }
    else
    {
        cout << res;
    }
    // cout << bottomup(target, coins, n);
}