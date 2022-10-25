#include<bits/stdc++.h>
using namespace std;
vector < int > prime;
bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i==0) return false;
    }
    return n > 1;
}
int main(){
    int n;
    while(cin >> n){
        if(isPrime(n)){
            prime.push_back(n);
        }    
    }
    int l = prime.size();
    int a[l] = {0};
    for(int i = 0; i < l; i++){
        if(a[i] == 0){
            int cnt = 1;
            for(int j = i + 1; j < l; j++){
                if(prime[i] == prime[j]){
                    a[j] = 1;
                    cnt++;
                }
            }
            cout << prime[i] << " " << cnt << endl;
        }
    }
    return 0;
}
