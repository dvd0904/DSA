#include <bits/stdc++.h>
using namespace std;
unordered_set<int> S;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (S.count(x) == 0)
            cout << x << " ";
        S.insert(x);
    }
}