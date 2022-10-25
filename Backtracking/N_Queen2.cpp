#include <bits/stdc++.h>
using namespace std;
int a[101][101], Queen[101], cot[101], dcx[101], dcn[101], res = 0;
void init()
{
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
            cin >> a[i][j];
    }
}
void Try(int i)
{
    for (int j = 1; j <= 8; j++)
    {
        if (!cot[j] && !dcx[i + j - 1] && !dcn[i - j + 8])
        {
            Queen[i] = a[i][j];
            cot[j] = dcx[i + j - 1] = dcn[i - j + 8] = 1;
            if (i == 8)
            {
                int sum = 0;
                for (int i = 1; i <= 8; i++)
                    sum += Queen[i];
                res = max(sum, res);
            }
            else
                Try(i + 1);
            cot[j] = dcx[i + j - 1] = dcn[i - j + 8] = 0;
        }
    }
}
int main()
{
    init();
    Try(1);
    cout << res;
}