#include<bits/stdc++.h>
using namespace std;
int cnt[1000005];
int dem[1000005];
int const mod = 1e9+7;
void sieve(){
    for(int i=1;i<=1e6;i++){
        cnt[i] = i;
    }
    for(int i=2;i<=1000;i++){
        if(cnt[i] == i){
            for(int j = i*i; j<=1e6; j+=i){
                if(cnt[j] == j) cnt[j] = i;
            }
        }
    }
}
int main(){
    int n; cin>>n;
    sieve();
    for(int i=0;i<n;i++){
        int x; cin>>x;
        while(x!=1){
            int temp = cnt[x];
            while(x%temp == 0){
                x/=temp;
                dem[temp]++;
            }
        }
    }
    long long res=1;
    for(int i=2;i<=1e6; i++){
        if(dem[i] != 0){
            res = res * (dem[i]+1);
            res %= mod;
        }
    }
    cout<<res;
    return 0;
}
