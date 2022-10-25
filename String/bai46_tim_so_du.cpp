#include <bits/stdc++.h>
using namespace std;
int findMod4(string s)
{
    int n = s.length();
    int k = 0;
    if (n == 1)
        k = s[0] - '0';
    else
        k = (s[n - 2] - '0') * 10 + s[n - 1] - '0';
    
    return k % 4;
}
int main()
{
    string s;
    cin >> s;
    int d2[4] = {1, 2, 4, 3};
    int d3[4] = {1, 3, 4, 2};
    int d4[4] = {1, 4, 1, 4};
    int mod = 1, Mod4 = findMod4(s);
    for (int i = 0; i < 4; i++)
    {
        if (Mod4 == i)
        {
            mod += d2[i] + d3[i] + d4[i];
            break;
        }
    }
    cout << mod % 5;
}