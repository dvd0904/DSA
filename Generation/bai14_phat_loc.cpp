#include <bits/stdc++.h>
using namespace std;
int n, a[100], ok;
void display()
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
// 1: 8, 0: 6
bool check()
{
    // 8 o dau, 6 o cuoi
    if (a[1] == 0 || a[n] == 1)
        return false;
    // 2 so 8 canh nhau
    for (int i = 1; i < n; i++)
    {
        if (a[i] == 1 && a[i + 1] == 1)
            return false;
    }
    // nhieu nhat 3 so 6 canh nhau
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == 0 && a[i + 1] == 0)
            cnt++;
        else
            cnt = 1;
        if (cnt > 3)
            return false;
    }
    return true;
}
int main()
{
    cin >> n;
    ok = 1;
    display();
    while (ok)
    {
        if (check())
        {
            for (int i = 1; i <= n; i++)
            {
                if (a[i] == 1)
                    cout << "8";
                else
                    cout << "6";
            }
            cout << endl;
        }
        next();
    }
}
