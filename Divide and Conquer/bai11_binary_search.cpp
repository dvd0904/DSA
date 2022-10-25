#include <bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int k, int l, int r)
{
    int res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == k)
        {
            res = m;
            return 1;
        }
        else if (a[m] < k)
            l = m + 1;
        else
            r = m - 1;
    }
    return 0;
}
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a)
        cin >> x;
    sort(a, a + n);
    if (binarySearch(a, k, 0, n - 1))
        cout << "YES";
    else
        cout << "NO";
}