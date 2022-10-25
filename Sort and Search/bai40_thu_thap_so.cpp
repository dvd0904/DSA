// 5
// 4 2 1 5 3
// pos[4] = 1, pos[2] = 2, pos[1] = 3, pos[5] = 4, pos[3] = 5

#include <bits/stdc++.h>
using namespace std;

const int S = 2e5 + 1;
int a[S], pos[S];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pos[a[i]] = i;
    }
    int rounds = 1;
    for (int i = 2; i <= n; i++)
    {
        // vi tri cua so thu i < vi tri cua so thu (i - 1) thi phai di lai 1 vong
        if (pos[i] < pos[i - 1])
            rounds++;
    }
    cout << rounds;
}
