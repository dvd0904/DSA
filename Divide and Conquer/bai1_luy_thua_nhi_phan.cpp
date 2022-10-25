#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll const mod = 1e9 + 7;
ll Pow(ll a, ll b)
{

    if (b == 0)
        return 1;
    int temp = Pow(a, b / 2) % mod;
    if (b % 2 == 0)
        return (temp % mod * temp % mod) % mod;
    else
        return (a % mod * temp % mod * temp % mod) % mod;
}
int main()
{
    ll a, b;
    cin >> a >> b;
    cout << Pow(a, b);
    return 0;
}
