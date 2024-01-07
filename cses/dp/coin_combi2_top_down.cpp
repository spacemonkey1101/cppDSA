#include <iostream>
#include <cstring>
using namespace std;
#define ll long long

ll const mod = 1e9 + 7;

ll dp[100001][101];
ll rec(int amount, int ind, int *coins, int n)
{
    if (ind == n)
    {
        return 0;
    }
    if (amount == 0)
    {
        return 1;
    }
    // memoize
    if (dp[amount][ind] != -1)
    {
        return dp[amount][ind];
    }

    // take or not take
    ll ways = 0;

    ways = (ways % mod + rec(amount, ind + 1, coins, n) % mod) % mod;
    if (amount >= coins[ind])
    {
        ways = (ways % mod + rec(amount - coins[ind], ind, coins, n) % mod) % mod;
    }
    // store and return
    return dp[amount][ind] = ways;
}
int main()
{
    memset(dp, -1, sizeof(dp));

    int n, x;
    cin >> n >> x;
    int coins[n];
    for (int i = 0; i < n; i++)
        cin >> coins[i];
    cout << rec(x, 0, coins, n);
}