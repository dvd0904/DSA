#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[n], b[m];
    vector<int> V;
    V.push_back(-1);
    for (int &x : a)
        cin >>
            x;
    for (int &x : b)
        cin >> x;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            V.push_back(a[i]);
            V.push_back(b[j]);
            i++;
            j++;
        }
        else if (a[i] > b[j])
        {
            V.push_back(b[j]);
            j++;
        }
        else
        {
            V.push_back(a[i]);
            i++;
        }
    }
    while (i < n)
    {
        V.push_back(a[i]);
        i++;
    }
    while (j < m)
    {
        V.push_back(b[j]);
        j++;
    }
    cout << V[k];
}