#include<bits/stdc++.h>
using namespace std;
int demUoc(long long n){
    int cnt = 0, soUoc = 1;
    for(long long i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            int cnt = 0;
            while(n % i == 0){
                ++cnt;
                n /= i;
            }
            soUoc *= (cnt + 1);
        }
    }
    if(n != 1) soUoc *= 2;
    return soUoc;
}
int main(){
    long long n; cin >> n;
    cout << demUoc(n);
    return 0;
}
