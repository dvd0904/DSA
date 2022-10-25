#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<int> S;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            n /= i;
            S.insert(i);
            if (S.size() == 2)
                break;
        }
    }
    if (n == 1 || S.count(n) || S.size() <= 1)
        cout << "NO";
    else
        cout << "YES";
}
