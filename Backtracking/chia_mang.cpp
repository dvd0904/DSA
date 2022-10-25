#include <bits/stdc++.h>
using namespace std;
int n, k, a[100], ok = 0, sum = 0;
void Try(int cnt, int cur_sum)
{
    if (cnt == k)
    {
        ok = 1;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (cur_sum == sum)
            Try(cnt + 1, 0);
        else
        {
            if (cur_sum > sum)
                return;
            Try(cnt, cur_sum + a[i]);
        }
    }
}
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % k != 0)
        cout << 0;
    else
    {
        sum /= k;
        Try(0, 0);
        cout << ok;
    }
}