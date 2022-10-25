#include <bits/stdc++.h>
int n, a[100], ok;
using namespace std;
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
int main()
{
    cin >> n;
    string ten;
    vector<string> V, V1;
    for (int i = 0; i < n; i++)
    {
        cin >> ten;
        V.push_back(ten);
    }
    ok = 1;
    init();
    string res = "";
    while (ok)
    {
        for (int i = 1; i <= n; i++)
        {
            res += V[a[i] - 1];
            res += " ";
        }
        V1.push_back(res);
        res = "";
        next();
    }
    sort(V1.begin(), V1.end());
    for (string x : V1)
        cout << x << endl;
}
