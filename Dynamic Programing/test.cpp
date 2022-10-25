#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t, res = "";
    cin >> s >> t;
    int n = s.length(), m = t.length();
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (s[i] == t[j])
        {
            res += s[i];
            res += t[j];
            ++i;
            ++j;
        }
        else if (s[i] < t[j])
        {
            res += s[i];
            i++;
        }
        else
        {
            res += t[j];
            j++;
        }
    }
    while (i < n)
        res += s[i];
    while (j < m)
        res += t[j];
    cout << res;
}