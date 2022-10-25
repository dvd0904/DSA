#include<bits/stdc++.h>
using namespace std;
vector < int > cnt(1e6+1);
long long nC2(int n){
    return 1ll * n* (n - 1) / 2;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        cnt[ a[i] ]++;
    }
    long long dem = 0;
    for(int i = 0; i < n; i++){
        if(cnt[ a[i] ] >= 2){
            dem += nC2(cnt[ a[i] ]);
            cnt[ a[i] ] = 0;
        }
    }
    cout << dem;
    
    return 0;
}
