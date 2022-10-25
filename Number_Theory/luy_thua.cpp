#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod = 1e9 + 7;
ll powMod(ll a, ll b){
    ll res = 1;
    a %= mod;
    while(b){
        if(b & 1){
            res *= a;
            res %= mod;
        }
        a *= a;
        a %= mod;
        b >>= 1;
    }
    return res;
}

int main(){
    ll a, b; cin >> a >> b;
    cout << powMod(a, b);
}