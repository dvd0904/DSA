#include <iostream>
using namespace std;

void solve(int p, int q)
{
    if (q % p == 0)
    {
        cout << "1/" << q / p;
        return;
    }
    int n = q / p + 1;
    cout << "1/" << n << " + ";
    solve(p * n - q, q * n);
}

int main()
{
    int p, q;
    cin >> p >> q;
    solve(p, q);
}
