#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
long long dem(long long n){
    long long cnt = 0;
    for(long long i = 5; i <= n; i *= 5){
        cnt += n / i;
        cnt %= mod;
    }
    return cnt % mod;
}

int main(){
    long long n; cin >> n;
    cout << dem(n);
}