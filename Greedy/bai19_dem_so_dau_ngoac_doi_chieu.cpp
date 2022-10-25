#include <bits/stdc++.h>
using namespace std;

int solve(string s)
{
    int cnt1 = 0, cnt2 = 0;
    while (s.length())
    {
        int x = s.find("()");
        // cout << s << endl;
        if (x == -1)
            break;
        else
            s.erase(x, 2);
    }
    return s.length() / 2;
}

int main()
{
    string s;
    cin >> s;
    cout << solve(s) << endl;
}