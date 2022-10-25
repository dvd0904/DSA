#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll const MOD = 1e9 + 7;
int main()
{
    int n;
    cin >> n;
    priority_queue<ll> Q;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        Q.push(x);
    }
    ll res = 0;
    while (Q.size() > 1)
    {
        ll top1 = Q.top();
        Q.pop();
        ll top2 = Q.top();
        Q.pop();
        res += (top1 % MOD + top2 % MOD) % MOD;
        res %= MOD;
        Q.push(top1 + top2);
    }
    cout << res;
}