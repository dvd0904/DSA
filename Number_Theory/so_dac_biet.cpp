#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll const mod = 1e9+7;
ll powMod(ll n, ll k, ll m){
    ll res = 0, temp = 1;
    n %= m; 
     while(k){
         if(k & 1){    
             res += temp;
             res %= m;
        }
        k >>= 1;
        temp = temp * n;
        temp %= m;
    }
    return res;
}
int main(){
    ll n, k;
    cin >> n >> k;
    cout << powMod(n, k, mod);
    return 0;
}
