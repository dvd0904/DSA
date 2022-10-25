#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll const mod = 1e9 + 7;
ll powMod(ll a, ll b, ll m)
{
    ll res = 1;
    a %= m;
    while (b)
    {
        if (b & 1)
        {
            res *= a;
            res %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return res;
}
ll rev(ll n)
{
    ll res = 0;
    while (n)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}
int main()
{
    ll n;
    cin >> n;
    ll tmp = rev(n);
    cout << powMod(n, tmp, mod);
}