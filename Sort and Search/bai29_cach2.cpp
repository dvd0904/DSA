#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[i] > arr[i - 1])
                swap(arr[i - 1], arr[i]);
        }

        else
        {
            if (arr[i] < arr[i - 1])
                swap(arr[i - 1], arr[i]);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    solve(a, n);
    for (int x : a)
        cout << x << " ";
}