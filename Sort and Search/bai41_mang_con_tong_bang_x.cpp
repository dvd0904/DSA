#include <bits/stdc++.h>
using namespace std;

int solve(int a[], int n, int x)
{
    map<long long, int> M; // <prefixSum, count>
    long long res = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == x)
            res++;
        if (M.find(sum - x) != M.end())
            res += M[sum - x];
        M[sum]++;
    }
    return res;
}

int main()
{
    int n, x, cnt = 0;
    cin >> n >> x;
    int a[n];
    for (int &x : a)
        cin >> x;
    cout << solve(a, n, x);
}