#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cost[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    long long res = 0;
    for (int i = 9; i >= 0; i--)
    {
        res += n / cost[i];
        n %= cost[i];
    }
    cout << res;
}