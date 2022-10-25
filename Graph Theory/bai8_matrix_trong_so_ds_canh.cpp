#include <bits/stdc++.h>
using namespace std;

struct data
{
    int i, j, k;
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<data> V;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int x;
            cin >> x;
            if (j > i && x)
                V.push_back({i, j, x});
        }
    }
    for (data x : V)
        cout << x.i << " " << x.j << " " << x.k << endl;
}