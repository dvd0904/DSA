#include<bits/stdc++.h>
using namespace std;
int check[1000000+1];
void isPrime(){
    for(int i=2;i<=1000000;i++) check[i]=1;
    for(int i=2;i<=1000;i++){
        if(check[i]==1){
            for(int j=i*i;j<=1000000;j+=i) check[j]=0;
        }
    }
}

int main(){
    int t; cin >> t;
    isPrime();
    while(t--){
        int n; cin >> n;
        for(int i = 2; i <= sqrt(n); i++){
            if(check[i] && check[n - i]) cout << i << " " << n - i << endl;
        }
    }
}