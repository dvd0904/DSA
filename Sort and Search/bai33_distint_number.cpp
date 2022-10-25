#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    set<int> S;
    for (int &x : a)
    {
        cin >> x;
        S.insert(x);
    }
    cout << S.size();
}