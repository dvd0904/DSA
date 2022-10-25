#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll const MOD = 1e9 + 7;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    sort(a, a + n);
    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        res += (1ll * a[i] * i) % MOD;
        res %= MOD;
    }
    cout << res;
}