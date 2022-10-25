#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    multiset<int> even, odd;
    for (int &x : a)
    {
        cin >> x;
        if (x & 1)
            odd.insert(x);
        else
            even.insert(x);
    }
    if (even.size() % 2 == 0)
    {
        cout << "YES";
        return 0;
    }
    else
    {
        for (int x : even)
        {
            if (odd.find(x + 1) != odd.end() || odd.find(x - 1) != odd.end())
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}