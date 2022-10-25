#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> H, G;
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int &x : a)
    {
        cin >> x;
        H.insert(x);
    }
    for (int &x : b)
    {
        cin >> x;
        if (H.count(x))
            G.insert(x);
        H.insert(x);
    }
    for (auto x : G)
        cout << x << " ";
    cout << endl;
    for (auto x : H)
        cout << x << " ";
}