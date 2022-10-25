#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(ll p, ll q)
{
    ll x;
    while (1)
    {
        if (q % p == 0)
        {
            cout << "1/" << q / p << endl;
            return;
        }
        x = q / p + 1;
        cout << "1/" << x << " + ";
        // quy dong
        p = x * p - q;
        q *= x;
    }
}

int main()
{
    ll p, q;
    cin >> p >> q;
    solve(p, q);
}