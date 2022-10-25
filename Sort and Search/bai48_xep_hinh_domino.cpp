#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll a, b, n;
    cin >> a >> b >> n;
    ll l = 0, r = max(a, b) * n;
    ll res = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll x = mid / a;
        ll y = mid / b;
        if (x * y >= n)
        {
            res = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << res;
}