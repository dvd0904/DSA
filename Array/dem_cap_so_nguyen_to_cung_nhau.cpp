#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(!b) return a;
    else return gcd(b, a % b);
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cnt=0;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if( gcd( a[i], a[j] ) == 1) cnt++; 
        }
    }
    cout << cnt;
    return 0;
}

