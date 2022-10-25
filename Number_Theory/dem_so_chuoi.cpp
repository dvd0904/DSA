// Multinomial coefficient
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll const MOD = 1e9+7;
int const MAX = 1e6 + 1;
ll fact[MAX];
void factorial(){
    fact[0] = 1;
    for(int i = 1; i <= 1e6; i++){
        fact[i] = fact[i - 1] * i;
        fact[i] %= MOD; 
    }
}

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
	return powMod(a, MOD - 2, MOD);
}

int main(){
    factorial();
    string s; cin >> s;
    map < char, int > M;
    for(char x : s) M[x]++;
    ll tmp = 1;
    for(auto x : M){
        tmp *= fact[x.second];
        tmp %= MOD;
    }
    ll res = inverse(tmp, MOD);
    cout << ((fact[s.length()] % MOD) * (res % MOD)) % MOD;
}