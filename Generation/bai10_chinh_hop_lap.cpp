#include <bits/stdc++.h>
using namespace std;
int n, k, ok, a[100];
void init()
{
    for (int i = 1; i <= k; i++)
        a[i] = 1;
}
void next()
{
    int i = k;
    while (i >= 1 && a[i] == n)
        i--;
    if (i == 0)
        ok = 0;
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
            a[j] = 1;
    }
}

int main()
{
    cin >> n >> k;
    init();
    ok = 1;
    while (ok)
    {
        for (int i = 1; i <= k; i++)
            cout << a[i];
        cout << endl;
        next();
    }
}