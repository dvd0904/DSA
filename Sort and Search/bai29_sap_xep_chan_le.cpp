#include <bits/stdc++.h>
using namespace std;

void solve(int a[], int n)
{
    // Sort the array
    sort(a, a + n);

    int ans[n];
    int p = 0, q = n - 1;
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 == 0)
            ans[i] = a[q--];
        else
            ans[i] = a[p++];
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    solve(a, n);
}