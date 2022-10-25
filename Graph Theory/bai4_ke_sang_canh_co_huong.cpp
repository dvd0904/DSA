#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> VP;

bool cmp(pair<int, int> a, pair<int, int> b)
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
            VP.push_back({i, stoi(digit)});
        }
    }
    sort(begin(VP), end(VP), cmp);
    for (auto x : VP)
        cout << x.first << " " << x.second << endl;
}