#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    pair<int, int> A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i].first >> A[i].second;
    }
    sort(A, A + n);
    long long temp = A[0].first + A[0].second;
    for (int i = 1; i < n; i++)
    {
        temp = max(temp, (long long)A[i].first) + A[i].second;
    }
    cout << temp;
    return 0;
}