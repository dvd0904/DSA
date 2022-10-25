#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int mod = 1e9 + 7;

//maximum subarray : Chia va tri

ll crossSum(int a[], int l, int m, int r){
    ll left = LLONG_MIN;
    ll sum = 0;
    for(int i = m; i >= l; i--){
        sum += a[i];
        if(sum > left){
            left = sum;
        }
    }
    ll right = LLONG_MIN;
    sum = 0;
    for(int i = m + 1; i <= r; i++){
        sum += a[i];
        if(sum > right){
            right = sum;
        }
    }
    return max({left, right, left + right});
}

ll solve(int a[], int l, int r){
    if(l > r) return LLONG_MIN;
    if(l == r) return a[l];
    int m = (l + r) / 2;
    return max({solve(a, l, m), solve(a, m + 1, r), crossSum(a, l, m, r)});
}


int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    cout << solve(a, 0, n - 1) << endl;
}
