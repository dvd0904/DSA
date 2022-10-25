#include <bits/stdc++.h>
using namespace std;
int res[1001][1001];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        res[x][y] = 1;
        res[y][x] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
}