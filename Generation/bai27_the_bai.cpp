#include <bits/stdc++.h>
using namespace std;
int n, ok, a[100];
char num[11] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
void init()
{
    for (int i = 1; i <= n; i++)
        a[i] = i;
}
void next()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
        i--;
    if (i == 0)
        ok = 0;
    else
    {
        int j = n;
        while (a[i] > a[j])
            j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}
bool check()
{
    for (int i = 1; i < n; i++)
    {
        if (abs(a[i] - a[i + 1]) == 1)
            return false;
    }
    return true;
}
int main()
{
    cin >> n;
    ok = 1;
    init();
    string res = "";
    set<string> S;
    while (ok)
    {
        if (check())
        {
            for (int i = 1; i <= n; i++)
                res += num[a[i]];
        }
        if (!res.empty())
            S.insert(res);
        res.clear();
        next();
    }
    for (string x : S)
        cout << x << endl;
}