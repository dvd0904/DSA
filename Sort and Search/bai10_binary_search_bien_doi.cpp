#include <bits/stdc++.h>
using namespace std;

// 1) first position of x
int check1(int a[], int n, int x)
{
    int l = 0, r = n - 1;
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
// 2) last position of x
int check2(int a[], int n, int x)
{
    int l = 0, r = n - 1;
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
// 3) lower bound of x
int check3(int a[], int n, int x)
{
    int l = 0, r = n - 1;
    int res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] >= x)
        {
            res = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }
    return res;
}
// 4) upper bound of x
int check4(int a[], int n, int x)
{
    int l = 0, r = n - 1;
    int res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] > x)
        {
            res = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }
    return res;
}
// 5) count x
int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int &x : a)
        cin >> x;
    int res1 = check1(a, n, x);
    int res2 = check2(a, n, x);
    int res3 = check3(a, n, x);
    int res4 = check4(a, n, x);
    cout << res1 << endl
         << res2 << endl
         << res3 << endl
         << res4 << endl;
    if (res1 == -1)
        cout << 0;
    else
        cout << res2 - res1 + 1;
}