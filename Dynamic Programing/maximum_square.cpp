#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n + 1][m + 1];
    int dp[n + 1][m + 1];
    memset(dp, 0, sizeof(dp));
    // dp[i][j]: represents the size of the square sub-matrix with all 1
    // including a[i][j] where a[i][j] is the rightmost and bottom-most entry in sub-matrix.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    }
    for (int i = 1; i <= n; i++)
        dp[i][1] = a[i][1];
    for (int i = 1; i <= m; i++)
        dp[1][i] = a[1][i];
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= m; j++)
        {
            if (a[i][j] == 1)
                dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
            else
                dp[i][j] = 0;
        }
    }
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            res = max(res, dp[i][j]);
    }
    cout << res;
}