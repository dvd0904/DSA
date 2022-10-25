#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll merge(int a[], int l, int m, int r)
{
    vector<int> a1(a + l, a + m + 1);
    vector<int> a2(a + m + 1, a + r + 1);
    cout << "vector a1: " << endl;
    for (int x : a1)
        cout << x << " ";
    cout << endl;
    cout << "vector a2: " << endl;
    for (int x : a2)
        cout << x << " " << endl;
    cout << endl;
    int i = 0, j = 0;
    ll res = 0;
    while (i < a1.size() && j < a2.size())
    {
        if (a1[i] <= a2[j])
            a[l++] = a1[i++];
        else
        {
            // tron 2 mang da duoc sort
            // gia su neu co 1 phan tu x o mang a1 > phan tu y o mang a2
            // thi tat ca cac phan tu dung sau x tinh ca x > y (vi mang a1 da duoc sort nen cac so sau x se > x)
            a[l++] = a2[j++];
            res += a1.size() - i;
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
    return res;
}

ll solve(int a[], int l, int r)
{
    cout << "goi ham solve a " << l << " " << r << endl;
    ll res = 0;
    if (l < r)
    {
        int mid = (l + r) / 2;
        res += solve(a, l, mid);
        cout << "chay xong ham solve a " << l << " " << r << " " << endl;

        res += solve(a, mid + 1, r);
        cout << "chay xong ham solve a " << l << " " << r << " " << endl;

        res += merge(a, l, mid, r);
        cout << "chay xong ham merge a " << l << " " << mid << " " << r << " " << endl;
    }
    cout << res << endl;
    return res;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    cout << solve(a, 0, n - 1);
}