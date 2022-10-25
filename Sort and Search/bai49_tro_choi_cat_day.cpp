#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, k, a[10001];
bool isGood(double length)
{
    ll cnt = 0;
    for (int i = 0; i < n; i++)
        cnt += (ll)(a[i] / length);
    return cnt >= k;
}

int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    double l = 0, r = 1e18, res = -1;
    for (int i = 0; i < 120; i++)
    {
        double m = (l + r) / 2;
        if (isGood(m))
        {
            res = m;
            l = m;
        }
        else
            r = m;
    }
    cout << fixed << setprecision(6) << res;
}