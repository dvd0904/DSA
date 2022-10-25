#include <bits/stdc++.h>
using namespace std;
int n, a[100], used[100];
void print()
{
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
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
                print();
            else
                Try(i + 1);
            used[j] = 0;
        }
    }
}
int main()
{
    cin >> n;
    memset(used, 0, sizeof(used));
    Try(1);
}