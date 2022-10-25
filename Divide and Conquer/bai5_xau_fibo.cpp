#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll fib[100];
void fibonacci()
{
    fib[1] = 1;
    fib[2] = 1;
    for (int i = 3; i <= 92; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
}
char solve(int n, int k)
{
    if (n == 1)
        return 'A';
    if (n == 2)
        return 'B';
    if (k <= fib[n - 2])
        return solve(n - 2, k);
    return solve(n - 1, k - fib[n - 2]);
}
int main()
{
    fibonacci();
    int n, k;
    cin >> n >> k;
    // string s = "0AB";
    // sn = sn-1 + sn-2
    // while (n > 2)
    // {
    //     if (k <= fib[n - 2])
    //         // k thuoc so fibo thu n - 2
    //         n -= 2;
    //     else
    //     {
    //         // k thuoc so fibo thu n - 1
    //         k -= fib[n - 2];
    //         n--;
    //     }
    // }
    // cout << s[n];
    cout << solve(n, k);
}