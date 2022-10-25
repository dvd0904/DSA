#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll m, n, p, x, y;
void eculidExtended(ll m, ll n){
    if(n == 0){
        p = m;
        x = 1;
        y = 0;
    }else{
        eculidExtended(n, m % n);
        int temp = x;
        x = y;
        y = temp - (m / n) * y;
    }
}
int main(){
    cin >> m >> n >> p;
    eculidExtended(m, n);
    if((x +y ) % 2==0) cout <<"YES";
    else cout <<"NO";
    return 0;
}
