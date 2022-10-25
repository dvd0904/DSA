#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 1e9 + 7;
ll dp[505][100005];
int main()
{
    int n;
    cin >> n;
    int sum = n * (n + 1) / 2;
    if (sum & 1)
    {
        cout << 0;
        return 0;
    }
    sum /= 2;
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j >= i)
            {
                dp[i][j] += dp[i - 1][j - i];
                dp[i][j] %= mod;
            }
        }
    }
    cout << dp[n][sum];
}