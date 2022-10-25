#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int main(){
    int n; cin>>n;
    long long uoc=1;
    long long p, a[n];
    for(int i = 0; i < n; i++){
        cin >> p >> a[i];
    }
    for(int i = 0;i < n; i++){
        uoc = uoc * (a[i] + 1);
        uoc %= mod;
    }
    cout << uoc;
    return 0;
}
