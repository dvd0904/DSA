#include <bits/stdc++.h>
using namespace std;

int binarySearch(int n, int m, int s)
{
    int res = -1, mid, l = 1, r = s;
    while (l <= r)
    {
        mid = (l + r) >> 1;
        if ((mid - mid / 7) * n >= s * m)
        {
            res = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    if (res != -1)
        res -= res / 7;
    return res;
}

int main()
{
    int n, m, s;
    cin >> n >> s >> m;
    cout << binarySearch(n, m, s) << endl;
}