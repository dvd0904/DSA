#include <bits/stdc++.h>
using namespace std;
long long du(string a, long long b)
{
    long long mod = 0;
    for (int i = 0; i < a.length(); i++)
        mod = (mod * 10 + (a[i] - '0')) % b;

    return mod;
}
string gcd(string a, long long b)
{
    if (b == 0)
        return a;
    return gcd(to_string(b), du(a, b));
}
int main()
{
    string s;
    long long M;
    cin >> s >> M;
    cout << gcd(s, M);
}