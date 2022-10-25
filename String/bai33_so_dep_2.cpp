#include<bits/stdc++.h>
using namespace std;
bool rev(string s){
    int l = 0, r = s.length() - 1;
    while(l < r){
        if(s[l] != s[r]) return false;
        ++l; --r;
    }
    return true;
}
bool check(string s){
    if(s.find('6') == string :: npos) return false;
    return true;
}
int main(){
    string s; cin >> s;
    if(rev(s) && check(s)) cout << "YES";
    else cout << "NO";
}