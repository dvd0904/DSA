#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return n > 1;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(isPrime(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}