#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '1')
        {
            s.erase(i, 3);
            i--;
        }
    }
    if (s == "")
        cout << "EMPTY";
    else
        cout << s;
}