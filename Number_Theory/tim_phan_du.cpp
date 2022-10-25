#include<bits/stdc++.h>
using namespace std;
using ll = long long;

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

int main(){
    ll a, b, c, m;
    cin >> a >> b >> c >> m;
    cout << (powMod(a, b, m) * inverse(c, m)) % m;
}