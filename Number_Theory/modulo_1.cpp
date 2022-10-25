#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x, y, p;
void extended(ll a, ll b){
    if(b == 0){
        x = 1;
        y = 0;
        p = a;
    }
    else{
        extended(b, a % b);
        ll temp = x;
        x = y;
        y = temp - (a/b) * y;
    }
}
void inverse(ll a, ll m){
    extended(a, m);
    if(p != 1){
        cout <<"-1";
    }
    else{
        x = (x % m + m) % m; 
        cout << x << endl;
    }
}
int main(){
    ll a,b;
    cin >> a >> b;
    inverse(a, b);
    return 0;
}