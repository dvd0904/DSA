#include <bits/stdc++.h>
using namespace std;
set<int> res;
void cs(int n)
{
    while (n)
    {
        res.insert(n % 10);
        n /= 10;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
    {
        cin >> x;
        cs(x);
    }
    for (int x : res)
        cout << x << " ";
    return 0;
}