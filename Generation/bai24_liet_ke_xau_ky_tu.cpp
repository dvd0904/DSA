#include <bits/stdc++.h>
using namespace std;
int a[100], k, ok;
char c, b[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
void init()
{
    for (int i = 1; i <= k; i++)
        a[i] = 1;
}
void next(int n)
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
    cin >> c >> k;
    int n = (c - 'A') + 1;
    init();
    ok = 1;
    while (ok)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << b[a[i] - 1];
        }
        cout << endl;
        next(n);
    }
}
