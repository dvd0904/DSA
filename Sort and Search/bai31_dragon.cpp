#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end());
    int ok = 0;
    for (int i = 0; i < n; i++)
    {
        if (s > a[i].first)
        {
            s += a[i].second;
            ok = 1;
        }
        else
        {
            ok = 0;
            break;
        }
    }
    if (ok)
        cout << "YES";
    else
        cout << "NO";
}