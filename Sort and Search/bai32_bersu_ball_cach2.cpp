#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 1;
int a[N];
int b[N];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int x;
    for (int i = 1; i <= m; i++)
    {
        cin >> x;
        b[x]++;
    }
    sort(a + 1, a + n + 1);
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        if (b[a[i] - 1])
        {
            b[a[i] - 1]--;
            res++;
        }
        else if (b[a[i]])
        {
            b[a[i]]--;
            res++;
        }
        else if (b[a[i] + 1])
        {
            b[a[i] + 1]--;
            res++;
        }
    }
    cout << res;
}