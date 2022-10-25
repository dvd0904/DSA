#include <bits/stdc++.h>
using namespace std;

int n, ok, a[100];
vector<string> V;

void init(int l)
{
    for (int i = 1; i <= l; i++)
        a[i] = 0;
}

void ghep(int l)
{
    string res = "", tmp = "";
    for (int i = 1; i <= l; i++)
    {
        tmp += to_string(a[i]);
    }
    res += tmp;
    reverse(tmp.begin(), tmp.end());
    res += tmp;
    V.push_back(res);
}

void next(int l)
{
    ok = 1;
    while (ok)
    {
        ghep(l);
        int i = l;
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
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n / 2; i++)
    {
        init(i);
        next(i);
    }
    sort(V.begin(), V.end());
    for (string x : V)
        cout << x << endl;
}