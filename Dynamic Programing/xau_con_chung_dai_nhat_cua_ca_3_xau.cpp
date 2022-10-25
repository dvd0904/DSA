#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int a = s1.size(), b = s2.size(), c = s3.size();
    int dp[a + 1][b + 1][c + 1];
    memset(dp, 0, sizeof(dp));
    // dp[i][j][k]: do dai xau con chung dai nhat khi chon i phan tu
    //  cua s1, j phan tu cua s2, k phan tu cua s3
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                if (s1[i - 1] == s2[j - 1] && s2[j - 1] == s3[k - 1])
                    dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                else
                    dp[i][j][k] = max({dp[i - 1][j][k], dp[i][j - 1][k], dp[i][j][k - 1]});
            }
        }
    }
    cout << dp[a][b][c];
}