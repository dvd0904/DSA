#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int &x : a)
        cin >> x;
    for (int &x : b)
        cin >> x;
    sort(a, a + n); // nam
    sort(b, b + m); // nu
    multimap<int, int> cap;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] > b[j])
        {
            cap.insert({a[i], b[j]});
            ++i;
            ++j;
        }
        else
            i++;
    }
    cout << cap.size();
}