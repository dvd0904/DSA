// binary search on answer
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 2e5 + 1;
int n, k, a[MAX];
// mid tong nho nhat cua 1 mang con
bool isGood(ll mid)
{
    int cnt = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum > mid)
        {
            ++cnt;
            sum = a[i];
        }
    }
    if (sum > 0)
        cnt++;
    return cnt <= k;
}
int main()
{
    cin >> n >> k;
    ll left = 0, right = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        left = max(left, 1ll * a[i]);
        right += a[i];
    }
    ll res = -1;
    while (left <= right)
    {
        ll mid = (left + right) / 2;
        if (isGood(mid))
        {
            res = mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    cout << res;
}