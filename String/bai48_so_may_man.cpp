#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    long long mod = 0, sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        mod = (mod * 10 + (s[i] - '0')) % 9;
        sum += s[i] - '0';
    }
    return sum % 9 == 0 && mod == 0;
}
int main()
{
    string s;
    cin >> s;
    if (check(s))
        cout << "YES";
    else
        cout << "NO";
}