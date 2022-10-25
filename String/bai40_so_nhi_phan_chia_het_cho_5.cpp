#include <bits/stdc++.h>
using namespace std;
int mod5[4] = {1, 2, 4, 3};
bool check(string s)
{
    int mod = 0, trong_So = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            mod = (mod + mod5[trong_So % 4]) % 5;
        }
        trong_So++;
    }
    return mod == 0;
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