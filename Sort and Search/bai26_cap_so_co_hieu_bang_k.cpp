#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> M;
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a)
    {
        cin >> x;
        M[x]++;
    }
    int ok = 0;
    for (int i = 0; i < n; i++)
    {
        if (M[a[i] - k])
        {
            cout << 1;
            ok = 1;
            break;
        }
    }
    if (ok == 0)
        cout << -1;
}