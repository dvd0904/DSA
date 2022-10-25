#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt[256] = {0};
    for (char x : s)
        cnt[x]++;
    int res = 0;
    for (int i = 0; i < 256; i++)
        res = max(res, cnt[i]);
    // ky tu xuat hien nhieu nhat phai = hoac lon hon tong cac ki tu con lai 1 
    if (res <= s.size() - res + 1)
        cout << "YES";
    else
        cout << "NO";
}