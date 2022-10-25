#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n - 1];
    multiset<int> Sa, Sb;
    for (int &x : a)
    {
        cin >> x;
        Sa.insert(x);
    }
    for (int &x : b)
    {
        cin >> x;
        Sb.insert(x);
    }
    int dis;
    for (int x : Sa)
    {
        if (Sb.find(x) == Sb.end())
        {
            // cout << x << endl;
            auto ite = Sa.find(x);
            dis = distance(Sa.begin(), ite);
            break;
        }
    }
    cout << dis + 1;
}