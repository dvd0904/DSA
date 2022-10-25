#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    ll dp[n + 1][n + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n; i++)
        dp[i][i] = (ll)(s[i] - '0');
    for (int len = 2; len <= n; len++)
    {
        for (int i = 0; i <= n - len; i++)
        {
            int j = i + len - 1;
            string tmp = s.substr(i, len);
            // cout << stoll(tmp) << endl;
            dp[i][j] = stoll(tmp);
            // cout << i << " " << j << " " << dp[i][j] << endl;
        }
    }
    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // cout << dp[i][j] << " ";
            res += dp[i][j];
        }
        // cout << endl;
    }
    cout << res;
}