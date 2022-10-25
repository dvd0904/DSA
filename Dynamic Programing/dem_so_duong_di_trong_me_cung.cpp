#include <bits/stdc++.h>
using namespace std;
int n, res = 0;
char a[1001][1001];

void input()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
}

void Try(int i, int j)
{
    if (i == n - 1 && j == n - 1)
    {
        res += 1;
        return;
    }
    if (a[i + 1][j] == '.' && i + 1 < n)
    {
        a[i][j] = '*';
        Try(i + 1, j);
        a[i][j] = '.';
    }
    if (a[i][j + 1] == '.' && j + 1 < n)
    {
        a[i][j] = '*';
        Try(i, j + 1);
        a[i][j] = '.';
    }
}

int main()
{
    input();
    Try(0, 0);
    cout << res;
}