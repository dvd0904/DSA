#include <bits/stdc++.h>
using namespace std;
set<int> giao, hop, sx1, sx2;
int main()
{
    int n, m;
    cin >> n >> m;
    int A[n], B[m];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        sx1.insert(A[i]);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
        sx2.insert(B[i]);
    }
    int i = 0, j = 0;
    while (i < sx1.size() && j < sx2.size())
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
    while (i < sx1.size())
    {
        hop.insert(A[i]);
        i++;
    }
    while (j < sx2.size())
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