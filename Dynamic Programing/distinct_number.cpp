#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> *(a + i);
        sum += *(a + i);
    }
    bool dp[n + 1][sum + 1];
    // dp[i][j]: dp[i][j] = true neu ton tai mang con tu a[0], a[1],...,a[i - 1] co tong bang j
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i <= n; i++)
        dp[i][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        dp[i][a[i - 1]] = 1;
        for (int j = 1; j <= sum; j++)
        {
            if (dp[i - 1][j])
            {
                dp[i][j] = 1;
                dp[i][j + a[i - 1]] = 1;
            }
        }
    }
    set<int> S;
    for (int i = 0; i <= sum; i++)
        if (dp[n][i])
            S.insert(i);
    for (int x : S)
        cout << x << " ";
}