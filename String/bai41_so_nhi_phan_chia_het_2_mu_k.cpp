#include <bits/stdc++.h>
using namespace std;
bool check(string s, int k)
{
    int mod = 0, ts = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            if (ts >= k)
                mod += 0;
            else
                return false;
        }
        ts++;
    }
    return mod == 0;
}
int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    if (check(s, k))
        cout << "YES";
    else
        cout << "NO";
}