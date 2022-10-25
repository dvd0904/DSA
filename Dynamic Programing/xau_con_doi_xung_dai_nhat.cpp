// dp[i][j]: xau con co chi so bat dau tu i va ket thuc la j
// manacher algorithm
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    bool dp[n + 1][n + 1];
    memset(dp, false, sizeof(dp));
    for (int i = 0; i < n; i++)
        dp[i][i] = true;
    int res = 0;
    for (int length = 2; length < n; length++)
    {
        for (int i = 0; i <= n - length; i++)
        {
            int j = i + length - 1;
            if (length == 2)
            {
                if (s[i] == s[j])
                    dp[i][j] = true;
            }
            else
                dp[i][j] = (s[i] == s[j] && dp[i + 1][j - 1]);

            if (dp[i][j])
            {
                res = max(length, res);
            }
        }
    }
    cout << res;
}
