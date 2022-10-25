#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    long long res = 1;
    for (int &x : a)
        cin >> x;
    sort(a, a + n);
    for (int x : a)
    {
        if (res >= x)
            res += x;
    }
    cout << res;
}