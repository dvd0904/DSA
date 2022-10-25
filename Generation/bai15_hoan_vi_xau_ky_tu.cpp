#include <bits/stdc++.h>
int n, a[100], ok;
using namespace std;
void init()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
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
        int l = i + 1, r = n;
        while (l < r)
        {
            swap(a[l], a[r]);
            ++l;
            --r;
        }
    }
}
int main()
{
    string s;
    cin >> s;
    set<char> S;
    vector<char> V1;
    for (char x : s)
        S.insert(x);
    for (char x : S)
        V1.push_back(x);
    n = V1.size();
    ok = 1;
    init();
    vector<string> V;
    while (ok)
    {
        string res = "";
        for (int i = 1; i <= n; i++)
        {
            res += V1[a[i] - 1];
        }
        V.push_back(res);
        next();
    }
    sort(V.begin(), V.end());
    for (string x : V)
        cout << x << endl;
}
