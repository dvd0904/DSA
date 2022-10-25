#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int ans = 0;
    for (char x : s)
    {
        if (x == '(')
            ans++;
        else if (ans > 0)
            ans--;
    }
    cout << ans;
}