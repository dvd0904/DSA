#include <bits/stdc++.h>
using namespace std;
int n, s, ok;
int weight[20], value[20], a[100];

void init()
{
    for (int i = 1; i <= n; i++)
        a[i] = 0;
}

void next()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0)
        ok = 0;
    else
        a[i] = 1;
}
int check()
{
    int weightTotal = 0;
    int valueTotal = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 1)
        {
            weightTotal += weight[i];
            valueTotal += value[i];
        }
        if (weightTotal > s)
            return 0;
    }
    return valueTotal;
}
int main()
{
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
        cin >> weight[i];
    for (int i = 1; i <= n; i++)
        cin >> value[i];
    ok = 1;
    init();
    int res = 0;
    while (ok)
    {
        if (check())
            res = max(res, check());
        next();
    }
    cout << res;
}
