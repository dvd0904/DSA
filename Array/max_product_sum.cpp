#include<bits/stdc++.h>
using namespace std;
long long const MOD = 1e9 + 7;
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    long long res = 0;
    for(int i = n - 1; i >= 0; i--){
        res += 1ll * a[i] * i % MOD;
        res %= MOD;
    }
    cout << res;
}