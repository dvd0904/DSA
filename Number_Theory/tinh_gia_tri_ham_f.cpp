#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(ll n){
    if(n & 1){
        cout << (n + 1) * ( n / 2) / 2 - (n + 1) * ((n / 2) + 1) / 2;    
    }else{
        cout << (n + 2) * n / 2 / 2 - n * n / 2 / 2;
    }
}
int main(){
    ll n;
    cin >> n;
    solve(n);
    return 0;
}
