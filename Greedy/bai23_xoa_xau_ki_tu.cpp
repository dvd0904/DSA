#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    s.push_back('0');
    vector<int> V;
    int len = 0;
    for (int i = 0; i < (int)s.length(); i++)
    {
        if (s[i] == '1')
        {
            len++;
        }
        else
        {
            V.push_back(len);
            len = 0;
        }
    }
    sort(rbegin(V), rend(V));
    int res = 0;
    for (int i = 0; i < (int)V.size(); i++)
    {
        if (!(i & 1))
            res += V[i];
    }
    cout << res;
}