#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    set<int> S;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        S.insert(x);
    }
    cout << S.size();
}