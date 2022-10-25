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
    for (int i = 1; i <= sum; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= coins[j])
            {
                dp[i] += dp[i - coins[j]];
                dp[i] %= mod;
            }
        }
    }
    cout << dp[sum];
}