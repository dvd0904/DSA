#include<bits/stdc++.h>
using namespace std;
long long pt(long long n, int p){
    long long cnt = 0;
    for(long long i = p; i <= n; i *= p){
        cnt += n / i;
    }
    return cnt;
}
int main(){
    long long n, p; cin >> n >> p;
    cout << pt(n, p);
}