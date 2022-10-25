#include <bits/stdc++.h>
using namespace std;

int n, k, s, a[100], res = 0, sum = 0;
void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            for (int i = 1; i <= k; i++)
                sum += a[i];
            if (sum == s)
                res++;
        }
        else
            Try(i + 1);
        sum = 0;
    }
}

int main()
{
    cin >> n >> k >> s;
    Try(1);
    cout << res;
}