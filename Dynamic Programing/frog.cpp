#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k = 3;
    cin >> n;
    long long dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= min(i, k); j++)
            dp[i] += dp[i - j];
        }
    cout << dp[n];
}