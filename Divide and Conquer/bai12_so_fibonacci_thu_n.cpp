/*
|1 1|^n =|fn+1 fn  |
|1 0|    |fn   fn-1|
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll const mod = 1e9 + 7;
void multiply(ll F[2][2], ll M[2][2])
{
    ll x = ((F[0][0] % mod * M[0][0] % mod) % mod + (F[0][1] % mod * M[1][0] % mod) % mod) % mod;
    ll y = ((F[0][0] % mod * M[0][1] % mod) % mod + (F[0][1] % mod * M[1][1] % mod) % mod) % mod;
    ll z = ((F[1][0] % mod * M[0][0] % mod) % mod + (F[1][1] % mod * M[1][0] % mod) % mod) % mod;
    ll w = ((F[1][0] % mod * M[0][1] % mod) % mod + (F[1][1] % mod * M[1][1] % mod) % mod) % mod;

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

void powMod(ll F[2][2], ll n)
{
    if (n == 0 || n == 1)
        return;
    ll M[2][2] = {{1, 1}, {1, 0}};

    powMod(F, n / 2);
    multiply(F, F);

    if (n % 2 != 0)
        multiply(F, M);
}
ll fib(ll n)
{
    ll F[2][2] = {{1, 1}, {1, 0}};
    if (n == 0)
        return 0;
    powMod(F, n - 1);

    return F[0][0];
}

int main()
{
    ll n;
    cin >> n;
    cout << fib(n);
}
