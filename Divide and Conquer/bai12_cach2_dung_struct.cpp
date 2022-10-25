#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 1e9 + 7;
struct matrix
{
    ll F[2][2];
    matrix operator*(matrix other)
    {
        matrix res;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                res.F[i][j] = 0;
                for (int k = 0; k < 2; k++)
                {
                    res.F[i][j] += F[i][k] * other.F[k][j];
                    res.F[i][j] %= mod;
                }
            }
        }
        return res;
    }
};

matrix powMod(matrix a, ll n)
{
    if (n == 1)
        return a;
    matrix tmp = powMod(a, n / 2);
    tmp = tmp * tmp;
    if (n & 1)
        tmp = tmp * a;
    return tmp;
}
int main()
{
    ll n;
    cin >> n;
    matrix a;
    a.F[0][0] = 1;
    a.F[0][1] = 1;
    a.F[1][0] = 1;
    a.F[1][1] = 0;
    matrix res = powMod(a, n);
    cout << res.F[0][1];
}