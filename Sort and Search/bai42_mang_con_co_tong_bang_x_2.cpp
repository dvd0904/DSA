#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll solve(int a[], int n, int x)
{
    map<ll, ll> M;
    ll res = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (M.find(sum - x) != M.end())
            res++;
        M[sum]++;
    }
    return res;
}

int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int &x : a)
        cin >> x;
    cout << solve(a, n, x);
}