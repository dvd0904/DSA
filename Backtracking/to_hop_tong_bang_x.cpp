#include <bits/stdc++.h>
using namespace std;

int n, x, a[100];
vector<int> res;
vector<string> ans;
void init()
{
    cin >> n >> x;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void concatenate()
{
    string s = "{";
    for (int i = 0; i < res.size(); i++)
        s += to_string(res[i]) + " ";
    s.pop_back();
    s += "}";
    ans.push_back(s);
}
void Try(int pos, int cur_sum)
{
    if (cur_sum > x)
        return;
    if (cur_sum == x)
        concatenate();
    else
    {
        for (int i = pos; i < n; i++)
        {
            res.push_back(a[i]);
            Try(i, cur_sum + a[i]);
            res.pop_back();
        }
    }
}

int main()
{
    init();
    sort(a, a + n);
    Try(0, 0);
    if (ans.empty())
        cout << -1;
    else
    {
        cout << ans.size() << endl;
        for (string x : ans)
            cout << x << endl;
    }
}