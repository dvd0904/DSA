#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 1e9 + 7;
int main()
{
    int n, sum;
    cin >> n >> sum;
    int coins[n];
    ll dp[sum + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int &x : coins)
        cin >> x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (j >= coins[i])
            {
                dp[j] += dp[j - coins[i]];
                dp[j] %= mod;
            }
        }
    }
    cout << dp[sum];
}