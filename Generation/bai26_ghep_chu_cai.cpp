#include <bits/stdc++.h>
using namespace std;
char c;
vector<string> V1 = {"_", "A", "B", "C", "D", "E", "F", "G", "H"};
int a[100], ok;
void init(int n)
{
    for (int i = 1; i <= n; i++)
        a[i] = i;
}
void next(int n)
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
        i--;
    if (i == 0)
        ok = 0;
    else
    {
        int j = n;
        while (a[i] > a[j])
            j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}
bool check(string s)
{
    int len = s.length();
    if (len == 4)
    {
        if (s[0] == 'A' || s[len - 1] == 'A')
            return 1;
        return 0;
    }
    string tmp3 = s.substr(0, 1) + s.substr(len - 1, 1);
    string tmp1 = "AE", tmp2 = "EA";
    if (s.find(tmp1) != string ::npos)
        return 1;
    if (s.find(tmp2) != string ::npos)
        return 1;
    if (tmp3 == "AE" || tmp3 == "EA")
        return 1;
    return 0;
}
int main()
{
    cin >> c;
    int n = c - 'A' + 1;
    init(n);
    ok = 1;
    vector<string> V;
    string res = "";
    while (ok)
    {

        for (int i = 1; i <= n; i++)
            res += V1[a[i]];
        // check(res);
        if (check(res))
            V.push_back(res);
        res.clear();
        next(n);
    }
    sort(begin(V), end(V));
    for (string x : V)
        cout << x << endl;
}