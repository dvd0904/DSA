#include<bits/stdc++.h>
using namespace std;
bool check(string s, int l, int r){
    while(l < r){
        if(s[l] != s[r]) return false;
        l++; r--;
    }
    return true;
}
int main(){
    string s; cin >> s;
    int l = 0, r = s.size() - 1;
    if(check(s, l, r)) cout << "YES";
    else cout << "NO";
}