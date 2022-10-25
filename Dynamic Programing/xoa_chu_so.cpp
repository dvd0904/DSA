#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    if (n <= 9)
        return 1;
    ll dp[n + 1];
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
        dp[i] = 1e9;
    // dp[i]: store the minimum number of operations needed to reduce i to 0
    for (int i = 1; i <= n; i++)
    {
        for (char x : to_string(i))
            dp[i] = min(dp[i], dp[i - (x - '0')] + 1);
    }
    cout << dp[n];
}