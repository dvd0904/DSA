// a[i - 1] + 1 <= a[i] <= n - k + i
#include <bits/stdc++.h>

using namespace std;

int n, k, ok, x[1005], a[1005];
void init()
{
    int m = n;
    for (int i = k; i >= 1; i--)
        x[i] = m--;
}
void next()
{
    int i = k;
    while (i >= 1 && x[i] - x[i - 1] == 1)
        i--;
    if (i == 0)
        ok = 0;
    else
    {
        x[i]--;
        int m = n;
        for (int j = k; j > i; j--)
            x[j] = m--;
    }
}
int check()
{
    for (int i = 1; i <= k; i++)
        if (a[i] != x[i])
            return 0;
    return 1;
}
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
        cin >> a[i];
    init();
    ok = 1;
    int d = 1;
    while (ok)
    {
        if (check())
        {
            cout << d;
            return 0;
        }
        next();
        d++;
    }
}
