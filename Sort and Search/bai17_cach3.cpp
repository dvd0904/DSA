#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a)
        cin >> x;
    long long cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        auto l = lower_bound(a + i + 1, a + n, k - a[i]);
        auto r = upper_bound(a + i + 1, a + n, k - a[i]);
        if (l != r)
            cnt += r - l;
    }
    cout << cnt;
}