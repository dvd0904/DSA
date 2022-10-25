#include <bits/stdc++.h>
using namespace std;
int n, V;
// dp[i][j] : max value of i object with j weight
int main()
{
    int n, weightOfBag;
    cin >> n >> weightOfBag;
    int value[n + 1], weight[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> weight[i];
    for (int i = 1; i <= n; i++)
        cin >> value[i];
    int dp[n + 1][weightOfBag + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= weightOfBag; j++)
        {
            // if u dont take the object
            dp[i][j] = dp[i - 1][j];
            if (j >= weight[i])
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - weight[i]] + value[i]);
            }
        }
    }
    cout << dp[n][weightOfBag];
}