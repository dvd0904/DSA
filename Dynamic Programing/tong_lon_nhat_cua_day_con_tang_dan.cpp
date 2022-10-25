#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s[i] = a[i];
    }

    // s[i]: tong day cong tang dai nhat den ith
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j] && s[i] < s[j] + a[i])
            {
                s[i] = s[j] + a[i];
            }
        }
    }
    cout << *max_element(s, s + n);
}