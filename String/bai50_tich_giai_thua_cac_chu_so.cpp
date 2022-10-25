#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string res = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0' || s[i] == '1')
            continue;
        else
        {
            if (s[i] == '4')
                res += "322";
            else if (s[i] == '6')
                res += "53";
            else if (s[i] == '8')
                res += "7222";
            else if (s[i] == '9')
                res += "7332";
            else
                res += s[i];
        }
    }
    sort(res.begin(), res.end(), greater<char>());
    cout << res;
}