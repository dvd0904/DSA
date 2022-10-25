#include<bits/stdc++.h>
using namespace std;
long long tong(long long n){
    int cnt = 0;
    long long tongUoc = 1;
    for(long long i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            int cnt = 0;
            while(n % i == 0){
                ++cnt;
                n /= i;
            }
            tongUoc *= ((pow(i, cnt + 1) - 1) / (i - 1));
        }
    }
    if(n != 1) tongUoc *= (1 + n);
    return tongUoc;
}
int main(){
    long long n; cin >> n;
    cout << tong(n);
    return 0;
}
