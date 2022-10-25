#include <bits/stdc++.h>
using namespace std;
long long solve(string n, long long m)
{
    long long mod = 0;
    for (int i = 0; i < n.length(); i++)
        mod = (mod * 10 + (n[i] - '0')) % m;

    return mod;
}
int main()
{
    string n;
    long long m;
    cin >> n >> m;
    cout << solve(n, m);
}