#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int res;
    if (n.length() == 1)
    {
        if (n[0] == '0')
        {
            cout << 1;
            return 0;
        }
        res = n[0] - '0';
    }
    else
    {
        res = (n[n.length() - 2] - '0') * 10 + n[n.length() - 1] - '0';
    }
    int r[4] = {6, 8, 4, 2};
    res %= 4;
    if (res == 0)
        cout << r[res] << endl;
    else if (res == 1)
        cout << r[res] << endl;
    else if (res == 2)
        cout << r[res] << endl;
    else if (res == 3)
        cout << r[res] << endl;
}