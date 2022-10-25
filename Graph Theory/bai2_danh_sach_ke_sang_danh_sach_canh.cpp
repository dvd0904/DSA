#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    set<pair<int, int>> S;
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string digit;
        while (ss >> digit)
        {
            S.insert({min(i + 1, stoi(digit)), max(i + 1, stoi(digit))});
        }
    }
    for (auto x : S)
        cout << x.first << " " << x.second << endl;
}