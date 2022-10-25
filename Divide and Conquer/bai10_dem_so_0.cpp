#include <bits/stdc++.h>
using namespace std;
int binSearch(int a[], int l, int r)
{
    int res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == 1)
        {
            res = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    int res = binSearch(a, 0, n - 1);
    if (res == -1)
        cout << 0;
    else
        cout << res;
}