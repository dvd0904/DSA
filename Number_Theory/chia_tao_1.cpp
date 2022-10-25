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
        b /= 2;
    }
    return res;
}
ll inverse(ll a, ll m){
    return powMod(a, m-2, m);
}
ll starsAndBars(int n, int k){
    ll res = 1;
    if (k > n - k)
           k = n - k;   // nCk = nC(n-k)

    for (int i = 0; i <k; ++i){
        res = (res % mod * (n-i) % mod) % mod;
        res = (res % mod * inverse(i + 1, mod)) % mod;
    }
    return res;
}

int main( ){
    int n, m;
    cin >> n >> m;
    cout << starsAndBars(n-1, m-1);
    return 0;
}