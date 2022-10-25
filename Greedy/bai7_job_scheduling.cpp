#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> VP(n);
    for (int i = 0; i < n; i++)
    {
        cin >> VP[i].first >> VP[i].second;
    }
    sort(begin(VP), end(VP), cmp);
    int cnt = 1;
    int tmp = VP[0].second;
    for (int i = 1; i < n; i++)
    {
        if (VP[i].first > tmp)
        {
            cnt++;
            tmp = VP[i].second;
        }
    }
    cout << cnt;
}