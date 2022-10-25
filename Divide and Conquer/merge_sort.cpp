#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int l, int m, int r)
{
    vector<int> a1(a + l, a + m + 1);
    vector<int> a2(a + m + 1, a + r + 1);
    int i = 0, j = 0;
    while (i < a1.size() && j < a2.size())
    {
        if (a1[i] <= a2[j])
        {
            a[l++] = a1[i++];
        }
        else
        {
            a[l++] = a2[j++];
        }
    }
    while (i < a1.size())
    {
        a[l++] = a1[i++];
    }
    while (j < a2.size())
    {
        a[l++] = a2[j++];
    }
}

void mergeSort(int a[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    mergeSort(a, 0, n - 1);
    for (int x : a)
        cout << x << " ";
}