#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
}
int main(){
    int n; cin >> n;
    int a[205][205];
    set < int > S;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == i || j == n - i - 1){
                if(isPrime(a[i][j])) S.insert(a[i][j]);
            }
        }
    }
    cout << S.size();
}
