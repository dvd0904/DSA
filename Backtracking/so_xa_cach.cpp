#include <bits/stdc++.h>
using namespace std;

int n, used[100], a[100];
vector<string> VS;
int check()
{
    for (int i = 1; i < n; i++)
    {
        if (abs(a[i] - a[i + 1]) == 1)
            return 0;
    }
    return 1;
}

void res()
{
    string ans = "";
    for (int i = 1; i <= n; i++)
        ans += to_string(a[i]);
    VS.push_back(ans);
}

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!used[j])
        {
            a[i] = j;
            used[j] = 1;
            if (i == n)
            {
                if (check())
                    res();
            }
            else
                Try(i + 1);
            used[j] = 0;
        }
    }
}

int main()
{
    cin >> n;
    Try(1);
    sort(VS.begin(), VS.end());
    for (string x : VS)
        cout << x << endl;
}