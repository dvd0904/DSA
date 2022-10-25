#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    priority_queue<ll> Q;
    map<char, int> M;
    for (char x : s)
        M[x]++;
    for (auto x : M)
        Q.push(x.second);
    while (k--)
    {
        ll top = Q.top();
        Q.pop();
        top--;
        Q.push(max(0ll, top));
    }
    ll res = 0;
    while (!Q.empty())
    {
        res += Q.top() * Q.top();
        Q.pop();
    }
    cout << res;
}