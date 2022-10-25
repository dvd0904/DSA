#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    int n = s.length() - 1;
    if (s[n] != '0' && s[n] != '5')
        return false;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += s[i] - '0';
    }
    if (sum % 3 == 0)
        return true;
    return false;
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