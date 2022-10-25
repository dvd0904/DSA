#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    multiset<int> A1;
    for (int &x : a)
    {
        cin >> x;
        if (x == 0)
            A1.insert(x);
    }
    for (int x : a)
    {
        if (x)
            cout << x << " ";
    }
    for (int x : A1)
        cout << x << " ";
}