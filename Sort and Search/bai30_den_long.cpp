#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l;
    cin >> n >> l;
    int a[n];
    for (int &x : a)
        cin >> x;
    sort(a, a + n);
    double res = max(a[0] - 0, l - a[n - 1]);
    for (int i = 1; i < n; i++)
    {
        res = max(res, (double)(a[i] - a[i - 1]) / 2);
    }
    cout << fixed << setprecision(10) << res << endl;
}