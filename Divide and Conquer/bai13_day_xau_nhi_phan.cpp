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
int main()
{
    fibonacci();
    int n, k;
    cin >> n >> k;
    string s = "A01";
    while (n > 2)
    {
        if (k <= fib[n - 2])
            n -= 2;
        else
        {
            k -= fib[n - 2];
            n--;
        }
    }
    cout << s[n];
}