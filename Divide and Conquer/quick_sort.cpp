#include <bits/stdc++.h>
using namespace std;
int partition(int a[], int l, int r)
{
    int i = l - 1;
    int pivot = a[r];
    for (int j = l; j <= r - 1; j++)
    {
        if (a[j] < pivot)
        {
            ++i;
            swap(a[i], a[j]);
        }
    }
    ++i;
    swap(a[i], a[r]);
    return i;
}

void quicksort(int a[], int l, int r)
{
    if (l < r)
    {
        int pos = partition(a, l, r);
        quicksort(a, l, pos - 1);
        quicksort(a, pos + 1, r);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    quicksort(a, 0, n - 1);
    for (int x : a)
        cout << x << " ";
}