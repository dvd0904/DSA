#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll powMod(ll a, ll n)
{
    if (!n)
        return 1;
    ll res = powMod(a, n / 2);
    res *= res;
    if (n & 1)
        res *= 2;
    return res;
}
ll solve(ll n, ll k)
{
    ll posOfN = powMod(2, n - 1);
    if (posOfN == k)
        return n;
    if (posOfN > k)
        return solve(n - 1, k);
    return solve(n - 1, k - posOfN);
}
int main()
{
    ll n, k;
    cin >> n >> k;
    cout << solve(n, k);
}