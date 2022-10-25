#include <bits/stdc++.h>
using namespace std;
int n, queen[101], cot[101], dcX[101], dcN[101], res = 0;
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!cot[j] && !dcX[i + j - 1] && !dcN[i - j + n])
        {
            queen[i] = j;
            cot[j] = dcX[i + j - 1] = dcN[i - j + n] = 1;
            if (i == n)
                res++;
            else
                Try(i + 1);
            cot[j] = dcX[i + j - 1] = dcN[i - j + n] = 0;
        }
    }
}
int main()
{
    cin >> n;
    Try(1);
    cout << res;
}