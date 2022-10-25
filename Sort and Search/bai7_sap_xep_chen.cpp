#include <bits/stdc++.h>
using namespace std;
void insertionSort(int a[], int n)
{
    int i, j, key, cnt = 0;
    for (int i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            --j;
        }
        a[j + 1] = key;
        cnt++;
        cout << "Buoc " << cnt << ": ";
        for (int k = 0; k < n; k++)
            cout << a[k] << " ";
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    insertionSort(a, n);
}