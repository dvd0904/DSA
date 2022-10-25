#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    sort(a, a + n);
    for (int x : a)
        cout << x << " ";
    cout << endl;
    sort(a, a + n, greater<int>());
    for (int x : a)
        cout << x << " ";
}