#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    set<int> S;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int so[n];
    for (int i = n - 1; i >= 0; i--)
    {
        S.insert(a[i]);
        so[i] = S.size();
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l;
        cin >> l;
        cout << so[l] << endl;
    }
}
