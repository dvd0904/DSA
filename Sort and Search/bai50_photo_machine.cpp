#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool check(ll mid, ll x, ll y, ll t)
{
    ll cnt = 0;
    cnt += mid / x;
    cnt += mid / y;
    return cnt >= t;
}
int main()
{
    ll n, x, y;
    cin >> n >> x >> y;
    int Min = min(x, y);
    ll l = 0, r = min(x, y) * n;
    ll res = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        // tim gia tri nho nhat cua cnt
        // n - 1 vi luon phai in 1 cai tu ban goc truoc roi moi in duoc = 2 may
        if (check(mid, x, y, n - 1))
        {
            res = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << res + Min;
}