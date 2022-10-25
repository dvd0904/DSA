#include<bits/stdc++.h>
using namespace std;
bool incr(string s){
    for(int i = 1; i < s.length(); i++){
        if(s[i] < s[i - 1]) return false;
    }
    return true;
}
bool decr(string s){
    for(int i = 1; i < s.length(); i++){
        if(s[i] > s[i - 1]) return false;
    }
    return true;
}
int main(){
    string s; cin >> s;
    if(incr(s) || decr(s)) cout << "YES";
    else cout << "NO";
}