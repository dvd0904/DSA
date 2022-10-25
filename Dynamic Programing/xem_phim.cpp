#include <bits/stdc++.h>
using namespace std;
int main()
{
    int C, n;
    cin >> C >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int dp[n + 1][C + 1];
    memset(dp, 0, sizeof(dp));
    // dp[i][j]: max weight of i cow with j weight
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= C; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j >= a[i])
                dp[i][j] = max(dp[i][j], dp[i - 1][j - a[i]] + a[i]);
        }
    }
    cout << dp[n][C];
}