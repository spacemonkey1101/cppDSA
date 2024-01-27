#include <bits/stdc++.h>

using namespace std;
int dp[5002][5002];
int rec(int n, int m, string &word1, string &word2)
{
    // base case
    if (n == 0)
        return m;
    if (m == 0)
        return n;

    // memoize
    if (dp[n][m] != -1)
        return dp[n][m];

    // transition
    if (word1[n - 1] == word2[m - 1])
        return rec(n - 1, m - 1, word1, word2);
    int ans = min(rec(n - 1, m - 1, word1, word2), rec(n, m - 1, word1, word2));
    ans = 1 + min(ans, rec(n - 1, m, word1, word2));

    // save and return
    return dp[n][m] = ans;
}

int main()
{
    string word1, word2;
    cin >> word1 >> word2;
    int n = word1.size(), m = word2.size();

    memset(dp, -1, sizeof(dp));
    cout << rec(n, m, word1, word2);
}