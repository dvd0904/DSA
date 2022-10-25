#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}
bool isSquare(int n)
{
    int a = sqrt(n);
    if (a * a == n)
        return true;
    return false;
}
bool check(int n)
{
    int tmp;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            tmp = i;
            n /= i;
            break;
        }
    }
    if (isPrime(n) || isSquare(n))
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i != tmp && (n / i) != tmp)
                return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    if (isPrime(n) || isSquare(n))
    {
        cout << "NO";
        return 0;
    }
    else
    {
        if (check(n))
            cout << "YES";
        else
            cout << "NO";
    }
}