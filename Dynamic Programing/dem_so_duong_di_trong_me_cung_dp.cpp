#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 1e9 + 7;
int main()
{
    int n;
    cin >> n;
    char a[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    ll dp[n + 1][n + 1];
    // dp[i][j]: so cach di den o i j
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++)
    {
        if (a[i][1] == '.')
            dp[i][1] = 1;
        else
            break;
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[1][i] == '.')
            dp[1][i] = 1;
        else
            break;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= n; j++)
        {
            if (a[i][j] != '.')
                continue;
            if (a[i - 1][j] == '.')
                dp[i][j] += dp[i - 1][j];

            if (a[i][j - 1] == '.')
                dp[i][j] += dp[i][j - 1];

            dp[i][j] %= mod;
        }
    }
    cout << dp[n][n];
}
