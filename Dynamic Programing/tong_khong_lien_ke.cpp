#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    int dp[n][2];
    dp[0][0] = 0;
    dp[0][1] = a[0];
    // dp[i][0]: stores maximum subsequence sum till ith index with arr[i] excluded
    // dp[i][1]: stores the sum when arr[i] is included.

    for (int i = 0; i < n; i++)
    {
        dp[i][1] = dp[i - 1][0] + a[i];
        dp[i][0] = max(dp[i - 1][1], dp[i - 1][0]);
    }
    cout << max(dp[n - 1][0], dp[n - 1][1]);
}