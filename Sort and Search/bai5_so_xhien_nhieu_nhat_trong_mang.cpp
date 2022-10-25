#include <bits/stdc++.h>
using namespace std;
map<int, int> M;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
    {
        cin >> x;
        M[x]++;
    }
    sort(a, a + n);
    int Max = 0;
    for (auto x : M)
    {
        if (x.second > Max)
            Max = x.second;
    }
    for (auto x : M)
    {
        if (x.second == Max)
        {
            cout << x.first << " " << x.second;
            break;
        }
    }
}