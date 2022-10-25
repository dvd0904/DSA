#include<bits/stdc++.h>
using namespace std;
int isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
}
void pt(int n){
    for(int i = 3; i <= sqrt(n); i++){
        if(n % i == 0){
            cout << i << endl;
            break;
        }
    }
}
void uocMin(int n){
    cout << "1" << endl;
    for(int i = 2; i <= n; i++){
        if(i % 2 == 0) cout << "2" << endl;
        else{
            if(isPrime(i)) cout << i << endl;
            else pt(i);
        }
    }
}
int main(){
    int n;
    cin >> n;
    uocMin(n);
    return 0;
}
