#include<bits/stdc++.h>
using namespace std;
using ll = long long;
// string gcd(string a, string b){
//     if(a.length() < b.length()) return gcd(b, a);
//     if(b == "") return a;
//     else return gcd(a.substr(b.length()), b);
// }
ll gcd(ll b, ll c){
    if(c == 0) return b;
    else return gcd(c, b % c);
}
int main(){
    ll a, b, c; cin >> a >> b >> c;
    // string P = "", Q = "";
    // for(int i = 0; i < b; i++) P += to_string(a);
    // for(int i = 0; i < c; i++) Q += to_string(a);
    // cout << gcd(P, Q);
    ll res =  gcd(b, c);
    for(int i = 0; i < res; i++) cout << a;
}