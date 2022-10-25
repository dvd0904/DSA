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
    vector<pair<int, int>> V(n);
    for (int i = 0; i < n; i++)
    {
        cin >> V[i].first >> V[i].second;
    }
    sort(V.begin(), V.end(), cmp);
    int cnt = 1;
    int temp = V[0].second; // show đầu tiên
    for (int i = 1; i < n; i++)
    {
        // ngày đầu của show tiếp theo > ngày cuối của show trước
        if (V[i].first > temp)
        {
            cnt++;
            temp = V[i].second;
        }
    }
    cout << cnt;
    return 0;
}