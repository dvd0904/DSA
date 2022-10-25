#include <bits/stdc++.h>
using namespace std;
int n, ok, a[100], b[100];
void next(int a[], int n)
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
        i--;
    if (i == 0)
        ok = 0;
    else
    {
        int j = n;
        while (a[i] > a[j])
            j--;
        swap(a[i], a[j]);
        int l = i + 1, r = n;
        while (l < r)
        {
            swap(a[l], a[r]);
            ++l;
            --r;
        }
    }
}
bool check(int a[], int b[])
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
        a[i] = i;
    }
    ok = 1;
    int cnt = 0;
    while (ok)
    {
        cnt++;
        if (check(a, b))
        {
            cout << cnt << endl;
            break;
        }
        next(a, n);
    }
}