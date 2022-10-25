#include <bits/stdc++.h>
using namespace std;
int pt(long long n)
{
    int dem = 0;
    for (long long i = 2; i <= sqrt(n); i++)
    {
        int cnt = 0;
        while (n % i == 0)
        {
            ++cnt;
            n /= i;
        }
        if (cnt >= 2)
            return 0;
        if (cnt == 1)
            dem++;
    }
    if (n != 1)
        dem++;
    if (dem > 3)
        return 0;
    return 1;
}
int main()
{
    int n;
    cin >> n;
    if (pt(n))
        cout << 1;
    else
        cout << 0;
    return 0;
}
