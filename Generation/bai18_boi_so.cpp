#include <bits/stdc++.h>
using namespace std;
int ok, a[100];
long long solve(int x)
{
    int n = 2;
    long long res = 0;
    while (n <= 19)
    {
        for (int i = 1; i <= n; i++)
            a[i] = 0;
        ok = 1;
        while (ok)
        {
            int i = n;
            while (i >= 1 && a[i] == 1)
            {
                a[i] = 0;
                i--;
            }
            if (i == 0)
                ok = 0;
            else
                a[i] = 1;
            res = 0;
            for (int i = 1; i <= n; i++)
                res = res * 10 + a[i];
            res *= 8;
            if (res % x == 0 && res != 0)
                return res;
        }
        n++;
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
}