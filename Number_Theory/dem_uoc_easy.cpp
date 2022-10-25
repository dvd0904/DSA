#include<bits/stdc++.h>
using namespace std;
long long const mod = 1e9+7;
int cnt[1000005] = {0};
void counting(int n){
    for(int i = 2;i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                cnt[i]++;
                n /= i;
            }
        }
    }
    if(n!=1) cnt[n]++;
}
int main(){
    int n; cin >> n;
    int Arr[n+1];
    for(int i = 0; i < n; i++){
        cin >> Arr[i];
        counting(Arr[i]);
    }
    long long res = 1;
    for(int i = 0; i <= 1000000; i++){
        if(cnt[i] > 0){
            res = res * (cnt[i] + 1);
            res = res % mod;
        }
    }
    cout << res;
    return 0;
}
