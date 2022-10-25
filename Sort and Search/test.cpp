#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long res = 0;
    int a = n / 28, b = a / 3;
    res = a + b;
    int tmp = a + b + b % 3;
    while (tmp >= 3)
    {
        res += tmp / 3;
        tmp = tmp / 3 + tmp % 3;
    }
    cout << res;
}