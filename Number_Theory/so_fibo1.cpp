#include<bits/stdc++.h>
long long const mod = 1000000007;
using namespace std;
long long fib(long long n){
    long long A[n + 5];
    A[0] = 0;
    A[1] = 1;
    A[2] = 1;
    for(int i = 3; i <= n;i++){
        A[i] = (A[i - 1] % mod + A[i - 2] % mod) % mod;
    }
    return A[n - 1] % mod;
}
int main(){
    long long n;
    cin >> n;
    cout << fib(n);
    return 0;
}
