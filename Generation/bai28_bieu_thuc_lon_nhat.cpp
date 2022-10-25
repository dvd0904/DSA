#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    int sum = a[0];
    for (int i = 1; i < 4; i++)
    {
        if (a[i] < 0)
            sum -= a[i];
        else
            sum += a[i];
    }
    cout << sum;
}