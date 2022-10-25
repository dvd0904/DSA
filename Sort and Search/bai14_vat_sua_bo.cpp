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
    long long l_sua = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] - i > 0)
        {
            l_sua += a[i] - i;
        }
        else
            continue;
    }
    cout << l_sua;
}