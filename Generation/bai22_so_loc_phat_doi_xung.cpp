#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, ok, a[100];
vector<ll> V;

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
        if (a[i] == 0)
        {
            tmp += "6";
        }
        else
        {
            tmp += "8";
        }
    }
    res += tmp;
    reverse(tmp.begin(), tmp.end());
    res += tmp;
    V.push_back(stoll(res));
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
    for (int i = 1; i <= 9; i++)
    {
        init(i);
        next(i);
    }
    sort(V.begin(), V.end());
    for (int i = 1; i <= n; i++)
        cout << V[i - 1] << " ";
}