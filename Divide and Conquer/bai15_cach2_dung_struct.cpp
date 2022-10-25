#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 1e9 + 7;
int n, k;
struct matrix
{
    ll F[15][15];

    matrix operator*(matrix other)
    {
        matrix res, b = *this;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                res.F[i][j] = 0;
                for (int k = 1; k <= n; k++)
                {
                    res.F[i][j] += (this->F[i][k] % mod * other.F[k][j] % mod) % mod;
                    // res.F[i][j] += (b.F[i][k] % mod * other.F[k][j] % mod) % mod;
                    res.F[i][j] %= mod;
                }
            }
        }
        return res;
    }
};

matrix powMod(matrix a, int b)
{
    if (b == 1)
        return a;
    matrix res = powMod(a, b / 2);
    res = res * res;
    if (b & 1)
        res = res * a;
    return res;
}

int main()
{
    cin >> n >> k;
    matrix a, res;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> a.F[i][j];
    }
    res = powMod(a, k);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << res.F[i][j] << " ";
        cout << endl;
    }
}

/*
ex:
struct Student{
    string name, address;
    int age;
};

int main(){
    Student a;
    Student *ptr;
    ptr = &a;
    a.name same with (*ptr).name same with ptr -> name

}
same with this pointer

*/