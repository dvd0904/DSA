#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s, m, sur;
    cin >> n >> s >> m;
    int tmp = s * m;
    if (n * (s - s / 7) < s * m)
    {
        cout << -1;
        return 0;
    }
    for (int i = 1; i <= s - (s / 7); i++)
    {
        sur = n * i;
        if (sur >= tmp)
        {
            cout << i;
            return 0;
        }
    }
    cout << -1;
}