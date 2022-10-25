#include <bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int l, int r, int x)
{
    int res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] <= x)
        {
            res = m;
            l = m + 1;
        }
        else
            r = m - 1;
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
    sort(a, a + n);
    int index = binarySearch(a, 0, n - 1, x);
    cout << a[index];
}
