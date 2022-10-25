#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n <= 3)
        return n;
    int dp[n + 1];
    for (int i = 0; i <= n; i++)
        dp[i] = i;
    for (int i = 4; i <= n; i++)
    {
        for (int j = 1; j <= sqrt(i); j++)
        {
            int tmp = j * j;
            if (tmp > i)
                break;
            else
                dp[i] = min(dp[i], 1 + dp[i - tmp]);
        }
    }
    cout << dp[n];
}