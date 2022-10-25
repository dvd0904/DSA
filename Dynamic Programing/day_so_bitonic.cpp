#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], lis[n], lds[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        lis[i] = lds[i] = a[i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j] && lis[i] < lis[j] + a[i])
                lis[i] = lis[j] + a[i];
        }
    }
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = n - 1; j >= i; j--)
        {
            if (a[i] > a[j] && lds[i] < lds[j] + a[i])
                lds[i] = lds[j] + a[i];
        }
    }
    int res = lis[0] + lds[0] - a[0];
    for (int i = 1; i < n; i++)
    {
        res = max(res, lis[i] + lds[i] - a[i]);
    }
    cout << res;
}