#include<bits/stdc++.h>
using namespace std;

void Solve(int n){
    bool check[n + 1];
    for(int i = 2; i <= n; i++) check[i] = true;
    for(int i = 2; i <= sqrt(n); i++){
        if(check[i] == true){
            for(int j = i * i; j <= n; j += i)
                check[j] = false;  
        }
    }
    for(int i = 2; i <= n; i++){
        if(check[i]) cout<< i <<" ";
    }
    
}
int main(){
    int n; cin>>n;
    Solve(n);
    return 0;
}
