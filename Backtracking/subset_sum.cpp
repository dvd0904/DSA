#include <bits/stdc++.h>
using namespace std;
int n, a[100], sum = 0, ok = 0;
void init()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
}
void Try(int cnt, int cur_sum)
{
    if (ok)
        return;
    if (cnt == 2)
    {
        ok = 1;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (cur_sum + a[i] == sum)
            Try(cnt + 1, 0);
        else
        {
            if (cur_sum + a[i] < sum)
                Try(cnt, cur_sum + a[i]);
            else
                return;
        }
    }
}
int main()
{
    init();
    if (sum & 1)
        cout << 0;
    else
    {
        sum /= 2;
        Try(0, 0);
        cout << ok;
    }
}