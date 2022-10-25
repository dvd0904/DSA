#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
int main()
{
    int n, k;
    cin >> n >> k;
    long long dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = dp[1] = 1;
    // dp[i]: way to reach ith stair
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= min(i, k); j++)
        {
            dp[i] += dp[i - j];
            dp[i] %= mod;
        }
    }
    cout << dp[n];
}