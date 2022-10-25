#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // 4x + 7y = n
    // tim y sao cho y lon nhat, de ket qua ngan nhat
    for (int i = n / 7; i >= 0; i--)
    {
        int tmp = n - i * 7;
        if (tmp % 4 == 0)
        {
            for (int k = 0; k < tmp / 4; k++)
                cout << "4";
            for (int j = 0; j < i; j++)
                cout << "7";
            return 0;
        }
    }
    cout << -1;
}