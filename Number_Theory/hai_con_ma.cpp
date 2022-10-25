#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n; cin >> n;
    for(ll i = 1; i <= n; i++){
        ll cx1 = i * i * (i * i - 1)/2;
        ll cx2 = 4 * (i -1 ) * (i - 2); 
        cout << cx1 - cx2 << endl;
    }
}
