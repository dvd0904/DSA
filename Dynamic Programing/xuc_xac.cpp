#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 1e9 + 7;
int main()
{
    int sum;
    cin >> sum;
    int dice[7] = {0, 1, 2, 3, 4, 5, 6};
    ll dp[sum + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 1; i <= sum; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (i >= dice[j])
            {
                dp[i] += dp[i - dice[j]];
                dp[i] %= mod;
            }
        }
    }
    cout << dp[sum];
}