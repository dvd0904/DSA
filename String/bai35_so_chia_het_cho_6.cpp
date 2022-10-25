#include<bits/stdc++.h>
using namespace std; 
bool chia2(string s){
    if(s[s.length() - 1] & 1) return false;
    return true;
}
bool chia3(string s){
    int sum = 0;
    for(char x : s){
        sum += x - '0';
    }
    if(sum % 3 == 0) return true;
    return false;
}
int main(){
    string s; cin >> s;
    if(chia2(s) && chia3(s)) cout << "YES";
    else cout << "NO";
}