#include <bits/stdc++.h>
using namespace std;
set<int> giao;
set<int> hop;
int main()
{
    int n, m;
    cin >> n >> m;
    int A[n], B[m];
    for (int i = 0; i < n; i++)
        cin >> A[i];

    for (int i = 0; i < m; i++)
        cin >> B[i];
    sort(A, A + n);
    sort(B, B + m);
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (A[i] < B[j])
        {
            hop.insert(A[i]);
            i++;
        }
        else if (A[i] == B[j])
        {
            hop.insert(A[i]);
            giao.insert(A[i]);
            i++;
            j++;
        }
        else
        {
            hop.insert(B[j]);
            j++;
        }
    }
    while (i < n)
    {
        hop.insert(A[i]);
        i++;
    }
    while (j < m)
    {
        hop.insert(B[j]);
        j++;
    }
    for (int x : giao)
        cout << x << " ";
    cout << endl;
    for (int x : hop)
        cout << x << " ";
}