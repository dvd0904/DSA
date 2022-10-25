// 2 truong hop
// 1) xau co do dai chan~ => de xau doi xung thi tan suat cua cac ki tu phai chan
// 2) neu xau co do dai le => de xau doi xung thi phai co n - 1 ki tu co tan suat chan
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    map<char, int> M;
    for (char x : s)
        M[x]++;
    int dem = 0;
    for (auto x : M)
    {
        if (x.second & 1)
            dem++;
    }
    if (dem <= 1)
        cout << 1;
    else
    {
        if (dem & 1)
            cout << 1;
        else
            cout << 2;
    }
}