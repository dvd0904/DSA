#include <bits/stdc++.h>
using namespace std;
void selectionSort(int a[], int n)
{
    int i, j, min_index, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_index])
                min_index = j;
        }
        swap(a[i], a[min_index]);
        cnt++;
        if (cnt == n)
            break;
        cout << "Buoc " << cnt << ": ";
        for (int k = 0; k < n; k++)
        {
            cout << a[k] << " ";
        }
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
    selectionSort(a, n);
}