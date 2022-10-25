/*
x1 = n -> nc1
x1 + x2 = n -> nc2
...
x1 + x2 + ... + xk = n -> nck
nc1 + nc2 +...+ nck = 2^(k - 1);
*/
// star and bar
// composition

// vi du n = 6 => 1 1 1 1 1 1
// => co n - 1 = 5 khoang trong => tim so cach dat 1, 2,...n - 1 dau | vao 5 khoang trong do
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll const mod = 1e9 + 7;
ll powMod(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
        {
            res *= a;
            res %= mod;
        }
        a *= a;
        a %= mod;
        b >>= 1;
    }
    return res;
}
int main()
{
    ll n;
    cin >> n;
    n--;
    cout << powMod(2, n);
}