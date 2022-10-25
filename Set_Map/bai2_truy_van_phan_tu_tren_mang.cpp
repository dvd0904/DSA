#include <bits/stdc++.h>
using namespace std;
set<int> S;
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
        int X;
        cin >> X;
        if (S.count(X) != 0)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}