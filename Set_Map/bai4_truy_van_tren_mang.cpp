#include <bits/stdc++.h>
using namespace std;
multiset<int> S;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        S.insert(x);
    }
    int Q;
    cin >> Q;
    while (Q--)
    {
        int thaoTac;
        cin >> thaoTac;
        if (thaoTac == 1)
        {
            int x;
            cin >> x;
            S.insert(x);
        }
        if (thaoTac == 2)
        {
            int x;
            cin >> x;
            if (S.find(x) != S.end())
            {
                auto it = S.find(x);
                S.erase(it);
            }
        }
        if (thaoTac == 3)
        {
            int x;
            cin >> x;
            if (S.count(x) != 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}