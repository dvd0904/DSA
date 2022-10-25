#include <bits/stdc++.h>
using namespace std;
int n, a[100], b[100], ok;
char ch[5] = {'A', 'B', 'C', 'D', 'E'};
string num, alpha;
vector<string> V1, V2;
void init()
{
    for (int i = 1; i <= n; i++)
        a[i] = i;
    for (int i = 1; i <= n; i++)
        b[i] = 1;
}
void next()
{
    ok = 1;
    while (ok)
    {
        alpha = "";
        for (int i = 1; i <= n; i++)
            alpha += ch[a[i] - 1];
        V1.push_back(alpha);
        /****************************/
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
            int left = i + 1, right = n;
            while (left < right)
            {
                swap(a[left], a[right]);
                left++;
                right--;
            }
        }
    }
}
void next2()
{
    ok = 1;
    while (ok)
    {
        num = "";
        for (int i = 1; i <= n; i++)
        {
            num += to_string(b[i]);
        }
        V2.push_back(num);
        /**********************/
        int i = n;
        while (i >= 1 && b[i] == n)
            i--;
        if (i == 0)
            ok = 0;
        else
        {
            b[i]++;
            for (int j = i + 1; j <= n; j++)
                b[j] = 1;
        }
    }
}
int main()
{
    cin >> n;
    init();
    next();
    next2();
    for (string i : V1)
        for (string j : V2)
            cout << i + j << endl;
}
