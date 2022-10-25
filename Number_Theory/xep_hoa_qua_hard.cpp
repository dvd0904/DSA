#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gt[1000005];
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
int main(){
    ll n, k1, k2, k3, k4;
    cin >> n >> k1 >> k2 >> k3 >> k4;
    gt[0] =1, gt[1] =1;
    for(int i=2; i<=1000000;i++){
        gt[i] = gt[i-1] * i;
        gt[i] %= mod;
    }
    ll temp = ( (gt[k1] % mod) * (gt[k2] % mod) ) % mod;
    ll tmp  = ( (gt[k3] % mod) * (gt[k4] % mod) ) % mod;
    ll x = ((temp % mod) * (tmp % mod)) %mod;
    ll inverse = powMod(x, mod-2, mod);
    cout << ((gt[n] % mod) * (inverse % mod)) %mod;
    
    return 0;
}
