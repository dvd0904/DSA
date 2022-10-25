#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll const mod = 1e9+7;
ll powMod(ll a, ll b, ll m){
    ll res = 1;
    a %= m;
    while(b){
        if(b & 1){    
            res *= a;
            res %= m;
        }
        a *= a;
        a %= m;
        b >>= 1;
    }
    return res;
}

void inverse(ll a, ll m){
    cout << powMod(a, m - 2, m);
}
int main(){
    ll a; cin >> a;
    inverse(a, mod);
    return 0;
}
