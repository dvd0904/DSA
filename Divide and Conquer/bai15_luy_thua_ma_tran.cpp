#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define matrix vector<vector<ll>>
ll mod = 1e9 + 7;
matrix matrixMultiply(matrix a, matrix b)
{
    int len = a.size();
    matrix res(len, vector<ll>(len));
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < len; k++)
            {
                res[i][j] += (a[i][k] % mod * b[k][j] % mod) % mod;
                res[i][j] %= mod;
            }
        }
    }
    return res;
}

matrix powMod(matrix a, int b)
{
    if (b == 1)
        return a;
    matrix res = powMod(a, b >> 1);
    res = matrixMultiply(res, res);
    if (b & 1)
        res = matrixMultiply(res, a);
    return res;
}

int main()
{
    int n, k;
    cin >> n >> k;
    matrix a(n, vector<ll>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    matrix res = powMod(a, k);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
}