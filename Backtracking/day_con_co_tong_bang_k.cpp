#include <bits/stdc++.h>
using namespace std;
int n, k, a[100], save[100];
void Try(int pos, int cnt, int sum)
{
    for (int i = pos; i <= n; i++)
    {
        if (sum + a[i] <= k)
        {
            save[cnt] = a[i];
            if (sum + a[i] == k)
            {
                cout << "[";
                for (int j = 1; j < cnt; j++)
                    cout << save[j] << ' ';
                cout << save[cnt] << "]" << endl;
            }
            else
                Try(i + 1, cnt + 1, sum + a[i]);
        }
        else
            break;
    }
}
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    Try(1, 1, 0);
}