#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll gcd(ll a, ll b){
    if(!b) return a;
    else return gcd(b, a % b);
}
ll lcm(ll a, ll b){
    return a * b / gcd(a,b);
}
ll Solve(int x, int y, int z, int n){
    ll l = pow(10, n - 1);
    ll LCM = lcm(lcm(x, y), z);  
    ll res = (l + LCM - 1) / LCM * LCM;
    if(res < pow(10, n)) return res;
    return -1;
}
int main(){
    int x, y, z , n;
    cin >> x >> y >> z >> n;
    cout << Solve(x, y, z, n) << endl;
    
}