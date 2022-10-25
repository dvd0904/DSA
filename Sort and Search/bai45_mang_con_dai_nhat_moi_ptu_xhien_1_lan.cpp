#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    map<int, int> M;
    int a[n];
    ll res = 0, cnt = 0, left = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        M[a[i]]++;
        if (M[a[i]] == 1)
            cnt++;
        while (M[a[i]] > 1)
        {
            M[a[left]]--;
            left++;
        }
        res = max(res, i - left + 1);
    }
    cout << res;
}
