#include <bits/stdc++.h>
using namespace std;
int n, k, s, res = 0;
void Try(int sum, int cnt, int i)
{
    if (sum == s && cnt == k)
    {
        res++;
        return;
    }
    for (int j = i; j <= n; j++)
    {
        if (sum + j <= s)
        {
            Try(sum + j, cnt + 1, j + 1);
        }
    }
}
int main()
{
    cin >> n >> k >> s;
    Try(0, 0, 1);
    cout << res;
}