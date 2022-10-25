#include <bits/stdc++.h>
using namespace std;
set<int> A, B;
int main()
{
    int N, M;
    cin >> N >> M;
    int a[N], b[M];
    for (int &x : a)
    {
        cin >> x;
        A.insert(x);
    }
    for (int &x : b)
    {
        cin >> x;
        B.insert(x);
    }
    for (int x : A)
    {
        if (A.count(x) == 1 && B.count(x) == 0)
            cout << x << " ";
    }
}