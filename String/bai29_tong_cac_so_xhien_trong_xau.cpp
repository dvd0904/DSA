#include<bits/stdc++.h>
using namespace std;
void solve(string s){
    s += 'a';
    long long res = 0, sum = 0;
    for(int i = 0; i < s.length(); i++){
        if(isdigit(s[i])){ 
            sum = sum * 10 + s[i] - '0';
        }
        else{
            res += sum;
            sum = 0;
        }
    }
    cout << res;
}
int main(){
    string s; cin >> s;
    solve(s);
}