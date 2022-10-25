#include <bits/stdc++.h>
using namespace std;
vector<pair<string, int>> VP;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string digit;
        while (ss >> digit)
        {
            VP.push_back({digit, i});
        }
    }
    sort(begin(VP), end(VP), cmp);
    cout << endl;
    for (auto x : VP)
        cout << x.first << " " << x.second << endl;
}