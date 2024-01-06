#include <iostream>
#include <vector>
using namespace std;
#define ll long long
ll const mod = 1e9 + 7;

vector<ll> dp(1e4, -1);

ll rec(ll sum, int *coins, int n)
{
    if (sum == 0)
    {
        return 1;
    }

    if (dp[sum] != -1)
        return dp[sum];

    ll ways = 0;

    for (int i = 0; i < n; i++)
    {
        if (sum - coins[i] >= 0)
        {
            ways = (ways + rec(sum - coins[i], coins, n)) % mod;
        }
    }

    return dp[sum] = ways;
}
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, x;
    cin >> n >> x;
    int coins[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    rec(x, coins, n);

    cout << dp[x];
}