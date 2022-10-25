#include <bits/stdc++.h>
using namespace std;

// dp[i][j]: do dai xau con chung dai nhat khi lay i ki tu dau cua xau thu 1 va j ki tu cua xau thu 2
int main()
{
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    int dp[n + 1][m + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s[i - 1] == t[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    cout << dp[n][m];
}