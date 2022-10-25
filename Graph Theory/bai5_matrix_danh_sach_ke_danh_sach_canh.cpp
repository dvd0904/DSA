#include <bits/stdc++.h>
using namespace std;
set<pair<int, int>> Sp;
vector<int> V[1001];
int main()
{
    int n;
    cin >> n;
    int a[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (a[i][j])
                Sp.insert({j, i});
        }
    }
    for (auto x : Sp)
        cout << x.first << " " << x.second << endl;
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j])
                V[i].push_back(j);
        }
        cout << i << " : ";
        sort(begin(V[i]), end(V[i]));
        for (int x : V[i])
            cout << x << " ";
        cout << endl;
    }
}