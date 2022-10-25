#include <bits/stdc++.h>
using namespace std;
int n, A[105][105];
bool ok = false;
void init()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> A[i][j];
    }
}
void Try(int i, int j, string s)
{
    if (A[1][1] == 0 || A[n][n] == 0)
    {
        ok = false;
        return;
    }
    if (i == n && j == n)
    {
        ok = true;
        cout << s << " " << endl;
        return;
    }
    if (A[i + 1][j] && i + 1 <= n)
        Try(i + 1, j, s + "D");
    if (A[i][j + 1] && j + 1 <= n)
        Try(i, j + 1, s + "R");
}
int main()
{
    cin >> n;
    init();
    string s = "";
    Try(1, 1, s);
    if (!ok)
        cout << -1;
}
