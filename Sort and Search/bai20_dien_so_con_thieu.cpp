#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    map<int, int> mark;
    for (int &x : a)
    {
        cin >> x;
        mark[x]++;
    }
    sort(a, a + n);
    int L = a[0], R = a[n - 1];
    int cnt = 0;
    for (int i = L; i <= R; i++)
    {
        if (mark[i] == 0)
            cnt++;
    }
    cout << cnt;
    return 0;
}