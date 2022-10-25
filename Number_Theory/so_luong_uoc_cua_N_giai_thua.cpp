#include<bits/stdc++.h>
using namespace std;
int const mod = 1e9+7;
int Prime[100000+5];
void sieve(){
    for(int i = 2; i <= 1000000; i++) Prime[i] = 1;
    Prime[0] = Prime[1] =0; 
    for(int i = 2; i <= 1000; i++){
        if(Prime[i]){
            for(int j = i * i; j <= 1000000; j += i)
                Prime[j] = 0;  
        }
    }
}
int legendre(int n, int p){
    int deg = 0;
    for(int i = p; i <= n; i *= p){
        deg += n/i;
    }
    return deg;
}
long long countingDivisor(int n){
    sieve();
    long long res = 1;
    for(int i = 1;i <= n; i++){
        if(Prime[i]){
            res *= (legendre(n, i) +1 );
            res %= mod;
        }
    }
    return res;
}
int main(){
    int n;
    cin >> n;
    cout << countingDivisor(n);
    return 0;
}
