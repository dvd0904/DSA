#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    s = " " + s;
    t = " " + t;
    int dp[n + 1][m + 1];
    memset(dp, 0, sizeof(dp));
    // dp[i][j]: so cach it nhat de bien doi i ky tu dau tien cua xau 1 thanh j ky tu dau tien cua xau 2
    for (int i = 1; i <= n; i++)
        dp[i][0] = i;
    for (int i = 1; i <= m; i++)
        dp[0][i] = i;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s[i] == t[j])
                dp[i][j] = dp[i - 1][j - 1];
            else
            {
                dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
            }
        }
    }
    cout << dp[n][m];
}