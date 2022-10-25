#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    sort(a, a + n, greater<int>());
    int doCung = a[0];
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (doCung >= 1)
        {
            cnt++;
            doCung = min(doCung - 1, a[i]);
        }
        else
            break;
    }
    cout << cnt;
    return 0;
}