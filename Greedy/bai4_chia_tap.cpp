#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    ll sum = 0;
    for (int &x : a)
        cin >> x;
    if (k > n - k)
    {
        sort(a, a + n);
        for (int i = n - k; i < n; i++)
            sum += a[i];
        for (int i = 0; i < n - k; i++)
            sum -= a[i];
    }
    else
    {
        sort(a, a + n, greater<int>());
        for (int i = 0; i < k; i++)
            sum += a[i];
        for (int i = k; i < n; i++)
            sum -= a[i];
    }
    cout << sum;
}