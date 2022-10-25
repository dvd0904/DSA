#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(int n, int x){
    ll res = 0;
    if(x == 1) return 1;
    for(int i = 1; i <= sqrt(x); i++){
        if(x % i == 0){
            if(x / i == i){
                if(i <= n) res++;
            }
            else{
                if(x / i <= n && i <= n) res += 2;
            }
        }
    }
    return res;
}

int main(){
    int n, x;
    cin >> n >> x;
    cout << solve(n, x);

}
