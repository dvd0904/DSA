#include <bits/stdc++.h>
using namespace std;
map<int, int> M;
vector<pair<int, int>> V1, V2;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
        return a.second > b.second;
    else
        return a.first < b.first;
}
bool cmp2(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        M[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (M[a[i]])
        {
            V1.push_back({a[i], M[a[i]]});
            V2.push_back({a[i], M[a[i]]});
            M[a[i]] = 0;
        }
    }
    // nho hon in truoc
    sort(V1.begin(), V1.end(), cmp);
    for (auto x : V1)
    {
        for (int j = 0; j < x.second; j++)
            cout << x.first << " ";
    }
    cout << endl;
    // xuat hien truoc in truoc
    stable_sort(V2.begin(), V2.end(), cmp2);
    for (auto x : V2)
    {
        for (int j = 0; j < x.second; j++)
            cout << x.first << " ";
    }
    return 0;
}