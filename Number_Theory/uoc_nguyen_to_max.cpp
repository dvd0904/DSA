#include<bits/stdc++.h>
using namespace std;
int pt(int n){
    int temp;
    for(int i =2 ; i <= sqrt(n); i++){
        temp = i;
        while(n % i == 0){
            n /= i;
        }
        if(n == 1) return temp;
    }
    if(n != 1) return n;
    return 1;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin >> n;
        cout << pt(n) << endl;
    }
    return 0;
}
