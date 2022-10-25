#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;
    map<int, int> M;
    int a[n];
    ll res = 0, cnt = 0, left = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        M[a[i]]++;
        if (M[a[i]] == 1)
            cnt++;
        while (cnt > k)
        {
            M[a[left]]--;
            if (M[a[left]] == 0)
                cnt--;
            ++left;
        }
        res += i - left + 1;
    }
    cout << res;
}
