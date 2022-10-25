#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll powMod(int a, ll n){
    if (n == 0)
        return 1;
    ll temp = powMod(a, n/2);
    if (n % 2 == 0)
        return (temp * temp) % 10;
    else
        return (a * temp * temp) % 10;
}
int main(){
	ll n;
	cin >> n;
	cout << powMod(1378, n);
	return 0;
}

