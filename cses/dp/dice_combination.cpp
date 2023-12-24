#include <iostream>

using namespace std;

long long mod = 1e9 + 7;
long long dp[1000000] = {0};
long long rec(int n)
{
    if (n == 0)
        return 1;

    if (dp[n] != 0)
    {
        return dp[n];
    }
    long long ways = 0;

    for (int i = 1; i <= 6; i++)
    {
        if (i <= n)
        {
            ways = (ways % mod + rec(n - i) % mod) % mod;
        }
    }
    return dp[n] = ways;
}
int main()
{
    int n;
    cin >> n;
    int dp[n + 1] = {0};
    dp[0] = 1;
    for (int j = 1; j <= n; j++)
    {
        long long ways = 0;
        for (int k = 1; k <= 6; k++)
        {
            if (k <= j)
            {
                ways = (ways % mod + dp[j-k] % mod) % mod;
            }
        }
        dp[j] = ways;
    }
    cout << dp[n];
}