#include <bits/stdc++.h>
using namespace std;
void sinh(int a[], int n)
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
        i--;
    if (i == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
    }
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
            l++;
            r--;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sinh(a, n);
}
