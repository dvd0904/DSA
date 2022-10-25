#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    int even = 0, odd = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (i & 1)
            odd += s[i] - '0';
        else
            even += s[i] - '0';
    }
    if (abs(even - odd) % 11 == 0)
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