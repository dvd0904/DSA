/*
test case
1 10
2 4
3 5
7 9
1 - - - - - - - - - - 10
    - - -
      - - -
              - - -
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> VP;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        VP.push_back({l, 1});
        VP.push_back({r, -1});
    }

    sort(begin(VP), end(VP));
    for (auto x : VP)
        cout << x.first << " " << x.second << endl;
    int cur = 0;
    int res = 0;
    for (auto x : VP)
    {
        cur += x.second;
        res = max(res, cur);
    }

    cout << res;
}