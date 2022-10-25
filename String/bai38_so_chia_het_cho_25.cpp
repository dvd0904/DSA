#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    int n = s.size() - 1;
    if (n == 0)
    {
        if (s[n] - '0' == 0)
            return true;
    }
    if ((s[n] == '0' && s[n - 1] == '0') || ((s[n - 1] - '0') * 10 + s[n] - '0') % 25 == 0)
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