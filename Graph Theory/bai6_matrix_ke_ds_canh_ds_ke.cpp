#include <bits/stdc++.h>
using namespace std;
vector<int> V[1001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
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
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j])
            {
                V[i].push_back(j);
                cout << i << " " << j << endl;
            }
        }
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " : ";
        sort(begin(V[i]), end(V[i]));
        for (int x : V[i])
            cout << x << " ";
        cout << endl;
    }
}