#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll const mod = 1e9 + 7;
ll du(string a, ll b)
{
    ll _mod = 0;
    for (int i = 0; i < a.length(); i++)
        _mod = (_mod * 10 + (a[i] - '0')) % b;

    return _mod;
}
ll powMod(string n, ll m)
{
    ll res = 1;
    ll temp = du(n, mod);
    while (m)
    {
        if (m & 1)
        {
            res *= temp;
            res %= mod;
        }
        temp *= temp;
        temp %= mod;
        m /= 2;
    }
    return res;
}
int main()
{
    string n;
    ll m;
    cin >> n >> m;
    cout << powMod(n, m);
}