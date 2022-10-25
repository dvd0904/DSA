#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum;
    cin >> n >> sum;
    int coins[n], dp[sum + 1];
    dp[0] = 0;
    for (int &x : coins)
        cin >> x;
    for (int i = 1; i <= sum; i++)
        dp[i] = sum + 1;
    for (int i = 1; i <= sum; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= coins[j])
                dp[i] = min(dp[i - coins[j]] + 1, dp[i]);
        }
    }
    if (dp[sum] != sum + 1)
        cout << dp[sum];
    else
        cout << -1;
}