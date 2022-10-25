#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, cnt[5] = {0};
    cin >> n;
    while (n--)
    {
        cin >> x;
        cnt[x]++;
    }
    int res = cnt[4] + cnt[3] + (cnt[2] / 2);
    cnt[1] -= cnt[3];
    if (cnt[2] % 2 == 1)
    {
        res++;
        cnt[1] -= 2;
    }
    if (cnt[1] > 0)
        res += (cnt[1] + 3) / 4;

    cout << res;
}