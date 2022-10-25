#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    map<int, int> res;
    int n;
    cin >> n;
    int A[n];
    for (int &x : A)
    {
        cin >> x;
        res[x]++;
    }
    for (auto x : res)
        cout << x.first << " " << x.second << endl;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (res[A[i]] != 0)
        {
            cout << A[i] << " " << res[A[i]] << endl;
            res[A[i]] = 0;
        }
    }
}