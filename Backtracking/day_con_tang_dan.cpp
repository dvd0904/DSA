#include <bits/stdc++.h>
using namespace std;
int n, a[100];
vector<int> VI;
vector<string> VS;
void print()
{
    sort(begin(VS), end(VS));
    for (string x : VS)
        cout << x << endl;
}
void init()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
}
void concatenate()
{
    string s = "";
    for (int x : VI)
        s += to_string(x) + " ";
    VS.push_back(s);
}
void Try(int i)
{
    for (int j = i + 1; j <= n; j++)
    {
        if (a[j] > a[i])
        {
            VI.push_back(a[j]);
            if (VI.size() > 1)
                concatenate();
            Try(j);
            VI.pop_back();
        }
    }
}
int main()
{
    init();
    Try(0);
    print();
}