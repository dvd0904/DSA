#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    vector<int> res;
    // res[i]: phần tử nhỏ nhất của thể ở cuối của dãy con tăng dài nhất có độ dai là i
    for (int i = 0; i < n; i++)
    {
        auto it = lower_bound(begin(res), end(res), a[i]);
        if (it != res.end())
            *it = a[i];
        else
            res.push_back(a[i]);
    }
    cout << res.size();
}