#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll gcd(ll a, ll b){
    if(!b) return a;
    else return gcd(b, a % b);
}
ll lcm(ll a, ll b){
    ll temp = a / gcd(a, b);
    return temp * b;
}
int main(){
    ll a, b;
    cin >> a >> b;
    cout << gcd(a, b)<<" "<< lcm(a, b);
    return 0;
}
