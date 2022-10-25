#include <bits/stdc++.h>
using namespace std;
int n, k, ok, a[100];
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
bool check()
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += a[i];
    if (sum == k)
        return true;
    return false;
}
bool check2()
{
    int cnt = 0, i = 1, soLan = 0;
    while (i <= n)
    {
        while (a[i] == 0)
        {
            cnt = 0;
            i++;
        }
        while (a[i] == 1 && i <= n)
        {
            cnt++;
            i++;
        }
        if (cnt == k)
            soLan++;
        else if (cnt > k)
            return false;
    }
    return (soLan == 1);
}
int main()
{
    cin >> n >> k;
    ok = 1;
    init();
    while (ok)
    {
        if (check())
        {
            for (int i = 1; i <= n; i++)
                cout << a[i];
            cout << " ";
        }
        next();
    }
    cout << endl;
    ok = 1;
    init();
    while (ok)
    {
        if (check2())
        {
            for (int i = 1; i <= n; i++)
                cout << a[i];
            cout << " ";
        }
        next();
    }
}