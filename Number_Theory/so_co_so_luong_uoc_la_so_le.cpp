#include<bits/stdc++.h>
using namespace std;
int check(int n){
    int a = sqrt(n);
    if(1ll * a * a == n) return 1;
    return 0;
}
int main(){
    long long n; cin >> n;
    if(check(n)) cout <<"YES";
    else cout <<"NO";
    return 0;
}
