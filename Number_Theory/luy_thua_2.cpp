#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll const mod = 1e9+7;
ll powMod(ll a, ll b, ll m){
    ll res = 1;
    a %= m;
    while(b){
        if(b & 1){
            res = res * a;
            res %= m;
        }
        a = a * a;
        a %= m;
        b >>= 1;
    }
    return res;
}

ll solve(ll a, ll b, ll c, ll m){
    ll res,ans;
    if(a==0 && b==0 && c==0) return 1;
    res = powMod(b, c, m-1); // fermat's little theorem
    ans = powMod(a, res, m); 
    return ans;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        ll a, b, c;
        cin >> a >> b >> c;
        cout << solve(a, b, c, mod) << endl;
    }
    cout << endl;
    return 0;
}
