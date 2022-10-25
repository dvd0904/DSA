#include <bits/stdc++.h>
using namespace std;
int n, A[101][101], used[101][101];
vector<string> res;
void init()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> A[i][j];
            used[i][j] = 0;
        }
    }
}
void Try(int i, int j, string s)
{
    if (A[1][1] == 0 || A[n][n] == 0)
        return;
    if (i == n && j == n)
    {
        res.push_back(s);
        return;
    }
    if (A[i + 1][j] && i + 1 <= n && !used[i + 1][j])
    {
        used[i][j] = 1;
        Try(i + 1, j, s + "D");
        used[i][j] = 0;
    }
    if (A[i - 1][j] && i - 1 >= 1 && !used[i - 1][j])
    {
        used[i][j] = 1;
        Try(i - 1, j, s + "U");
        used[i][j] = 0;
    }
    if (A[i][j + 1] && j + 1 <= n && !used[i][j + 1])
    {
        used[i][j] = 1;
        Try(i, j + 1, s + "R");
        used[i][j] = 0;
    }
    if (A[i][j - 1] && j - 1 >= 1 && !used[i][j - 1])
    {
        used[i][j] = 1;
        Try(i, j - 1, s + "L");
        used[i][j] = 0;
    }
}
int main()
{
    cin >> n;
    init();
    string s = "";
    Try(1, 1, s);
    sort(begin(res), end(res));
    if (res.empty())
        cout << -1;
    else
    {
        for (string x : res)
            cout << x << endl;
    }
}