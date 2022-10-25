#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum += 1ll * a[i] * i;
        sum %= mod;
    }
    cout << sum;
    return 0;
}
