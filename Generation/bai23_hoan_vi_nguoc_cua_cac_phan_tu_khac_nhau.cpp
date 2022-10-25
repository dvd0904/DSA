#include <bits/stdc++.h>
int a[100], ok;
using namespace std;
void init(int n)
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = n - i + 1;
    }
}
void next(int n)
{
    int i = n - 1;
    while (i >= 1 && a[i] < a[i + 1])
        i--;
    if (i == 0)
        ok = 0;
    else
    {
        int j = n;
        while (a[i] < a[j])
            j--;
        swap(a[i], a[j]);
        int l = i + 1, r = n;
        while (l < r)
        {
            swap(a[l], a[r]);
            l++;
            r--;
        }
    }
}

int main()
{
    int n, x;
    cin >> n;
    ok = 1;
    vector<int> V;
    set<int> S;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        S.insert(x);
    }
    for (auto x : S)
    {
        V.push_back(x);
    }
    int len = V.size();
    init(len);
    while (ok)
    {
        for (int i = 1; i <= len; i++)
        {
            cout << V[a[i] - 1] << " ";
        }
        cout << endl;
        next(len);
    }
}