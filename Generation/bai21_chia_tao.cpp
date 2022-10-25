#include<bits/stdc++.h>
using namespace std;

int n, ok, a[100], b[100];
void init(){
    for(int i = 1; i <= n; i++) a[i] = 0;
}
void next(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0) ok = 0;
    else a[i] = 1;
}
long long check(){
    long long sum0 = 0, sum1 = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] == 1) sum1 += b[i];
        else sum0 += b[i];
    }
    return abs(sum1 - sum0);
}
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> b[i];
    }
    init();
    ok = 1;
    long long res = (long long)1e18+5;
    while(ok){
        res = min(res, check());
        next();
    }
    cout << res;


}