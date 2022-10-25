#include <bits/stdc++.h>
using namespace std;
string s;
int ok;
void next(string s)
{
    int n = s.length() - 1;
    int i = n - 1;
    while (i >= 0 && s[i] >= s[i + 1])
        i--;
    if (i == -1)
    {
        cout << "NOT EXIST" << endl;
    }
    else
    {
        int j = n;
        while (s[i] >= s[j])
            j--;
        swap(s[i], s[j]);
        int l = i + 1, r = n;
        while (l < r)
        {
            swap(s[l], s[r]);
            ++l;
            --r;
        }
        cout << s;
    }
}
int main()
{
    cin >> s;
    next(s);
}