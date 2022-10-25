#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll n){
    while(n){
        if(n % 10 != 4 && n % 10 != 7) return false;
        n /= 10;
    }
    return true;
}

int main(){
    ll n, ok = 0;
    cin >> n;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            if(check(i) || check(n / i)){
                ok = 1;
                break;
            }
        }
    }
    if(!ok) cout << "NO";
    else cout << "YES";

}