#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    int n = s.length();
    if (n == 1)
    {
        if ((s[0] - '0') % 4 == 0)
            return true;
        return false;
    }
    else
    {
        int sum = 0;
        sum = 10 * (s[n - 2] - '0') + s[n - 1];
        if (sum % 4 == 0)
            return true;
        return false;
    }
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