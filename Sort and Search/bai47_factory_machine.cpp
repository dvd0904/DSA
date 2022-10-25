#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool check(ll a[], ll n, ll t, ll mid)
{
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt += mid / a[i];
    }
    return cnt >= t;
}
int main()
{
    ll n, t;
    cin >> n >> t;
    ll a[n];
    for (ll &x : a)
        cin >> x;
    ll l = 0, r = *min_element(a, a + n) * t;
    // tim phan tu dau tien >= cnt
    ll res = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(a, n, t, mid))
        {
            res = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << res;
}