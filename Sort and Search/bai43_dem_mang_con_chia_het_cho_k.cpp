// a % c == b % c
// => (a - b) % c == 0
// 7 % 3 == 10 % 3
// => (10 - 7) % 3 == 0
// using prefix sum
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int a[n];
    ll sum = 0, res = 0;
    for (int &x : a)
        cin >> x;
    map<ll, ll> mod;
    mod[0] = 1;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        res += mod[(sum % n + n) % n];
        mod[(sum % n + n) % n]++;
    }
    cout << res;
}
