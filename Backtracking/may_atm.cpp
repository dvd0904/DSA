#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, s, a[1001], res;
void Try(ll sum, ll cnt, int pos)
{
    if (sum == s)
    {
        res = min(res, cnt);
        return;
    }
    for (ll j = pos; j < n; j++)
    {
        if (sum + a[j] <= s)
            Try(sum + a[j], cnt + 1, j + 1);
    }
}

int main()
{
    cin >> n >> s;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    res = 1e9;
    Try(0, 0, 0);
    if (res != 1e9 && res != 0)
        cout << res;
    else
        cout << -1;
}