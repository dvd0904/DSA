#include <bits/stdc++.h>
using namespace std;

int n, ok, a[100];
// char dau[3] = {'_', '(', ')'};
void init()
{
    for (int i = 1; i <= n; i++)
        a[i] = 0;
}
void next()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0)
        ok = 0;
    else
        a[i] = 1;
}
bool check(string s)
{
    stack<char> st;
    for (char x : s)
    {
        if (st.empty())
            st.push(x);
        else if (st.top() == '(' && x == ')')
            st.pop();
        else
            st.push(x);
    }
    if (st.empty())
        return true;
    return false;
}

int main()
{
    cin >> n;
    init();
    ok = 1;
    string res = "";
    set<string> S;
    while (ok)
    {
        res = "";
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 0)
                res += ')';
            else
                res += '(';
        }
        if (check(res))
            S.insert(res);
        next();
    }
    if (!S.size())
        cout << "NOT FOUND";
    else
    {
        for (string x : S)
            cout << x << endl;
    }
}