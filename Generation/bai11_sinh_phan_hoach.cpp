#include <bits/stdc++.h>
using namespace std;
int n, a[100], ok, cnt;
void init()
{
    cnt = 1;
    a[1] = n;
}
void next()
{
    int i = cnt;
    while (i >= 1 && a[i] == 1)
        i--;
    if (i == 0)
        ok = 0;
    else
    {
        a[i]--;
        int d = cnt - i + 1;
        cnt = i;
        int q = d / a[i];
        int du = d % a[i];
        if (q)
        {
            for (int j = 1; j <= q; j++)
            {
                cnt++;
                a[cnt] = a[i];
            }
        }
        if (du)
        {
            cnt++;
            a[cnt] = du;
        }
    }
}

int main()
{
    cin >> n;
    init();
    ok = 1;
    vector<string> V;
    while (ok)
    {
        string res = "";
        for (int i = 1; i <= cnt; i++)
        {
            res += to_string(a[i]);
            res += '+';
        }
        res.pop_back();
        V.push_back(res);
        next();
    }
    cout << V.size() << endl;
    for (string x : V)
        cout << x << endl;
}