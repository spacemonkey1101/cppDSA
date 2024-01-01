#include <iostream>
#include <vector>
using namespace std;

long long const mod = 1e9 + 7;
int main()
{
    long long n, x;
    cin >> n >> x;
    int coins[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    vector<long long> dp(x + 1, 0);
    dp[0] = 0;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - coins[j] >= 0)
            {
                if (i - coins[j] == 0)
                {
                    dp[i] = (dp[i] % mod + 1 % mod) % mod;
                }
                else
                {
                    dp[i] = (dp[i] % mod + dp[i - coins[j]] % mod) % mod;
                }
            }
        }
    }
    cout << dp[x];
}