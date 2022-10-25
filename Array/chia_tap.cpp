#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a)
        cin >> x;
    sort(a, a + n, greater<int>());
    ll sum = 0;
    k = max(k, n - k);
    for (int i = 0; i < k; i++)
        sum += a[i];
    for (int i = k; i < n; i++)
        sum -= a[i];
    cout << sum;
}