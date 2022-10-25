#include <bits/stdc++.h>
using namespace std;
vector<string> V;
vector<pair<string, int>> V1;
map<string, int> M;

bool cmp3(string a, string b)
{
    if (a.length() != b.length())
        return a.length() < b.length();
    return a < b;
}
bool cmp4(pair<string, int> a, pair<string, int> b)
{
    if (a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}
int main()
{
    int n;
    string x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        M[x]++;
        V.push_back(x);
    }
    for (string x : V)
    {
        V1.push_back({x, M[x]});
    }
    // 1
    sort(begin(V), end(V));
    for (string x : V)
        cout << x << " ";
    cout << endl;
    // 2
    sort(begin(V), end(V), greater<string>());
    for (string x : V)
        cout << x << " ";
    cout << endl;
    // 3
    sort(begin(V), end(V), cmp3);
    for (string x : V)
        cout << x << " ";
    cout << endl;
    // 4
    sort(begin(V1), end(V1), cmp4);
    for (auto x : V1)
    {
        cout << x.first << " ";
    }
}