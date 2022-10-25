#include <bits/stdc++.h>
using namespace std;
int firstPos(int a[], int l, int r, int x)
{
    int res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
        {
            res = m;
            r = m - 1;
        }
        else if (a[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return res;
}
int lastPos(int a[], int l, int r, int x)
{
    int res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
        {
            res = m;
            l = m + 1;
        }
        else if (a[m] < x)
            l = m + 1;
        else
            r = m - 1;
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
    for (int i = 0; i < n; i++)
    {
        // đếm số lần xuất hiện của phần tử k - a[i]
        int l = firstPos(a, i + 1, n - 1, k - a[i]);
        int r = lastPos(a, i + 1, n - 1, k - a[i]);
        if (l != -1)
            cnt += r - l + 1;
    }
    cout << cnt;
}