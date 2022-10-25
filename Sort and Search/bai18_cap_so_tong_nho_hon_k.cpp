#include <bits/stdc++.h>
using namespace std;

int lastPos(int a[], int l, int r, int x)
{
    int res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] < x)
        {
            res = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return res;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a)
        cin >> x;
    sort(a, a + n);
    long long cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int r = lastPos(a, i + 1, n - 1, k - a[i]);
        if (r != -1)
            cnt += r - i;
    }
    cout << cnt;
}