#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    ll a[n];
    for (ll &x : a)
        cin >> x;
    sort(a, a + n);
    ll x = a[0] * a[1];                    // 2 so am
    ll y = a[n - 1] * a[n - 2] * a[n - 3]; // 3 so duong
    ll z = x * a[n - 1];                   // 2 am 1 duong
    ll t = a[n - 1] * a[n - 2];            // 2 duong
    cout << max({x, y, z, t});
}