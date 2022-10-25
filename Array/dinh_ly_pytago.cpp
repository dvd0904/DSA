#include<bits/stdc++.h>
using namespace std;
bool check(long long a[], int n){
    for(int i = n - 1; i >= 2; i--){ 
        int l = 0, r = i - 1;
        while(l < r){
            if(a[l] + a[r] == a[i]) return true;
            
            (a[l] + a[r] > a[i]) ? --r : ++l;
        }
    }
    return false;
}
int main(){
    int n; cin >> n;
    long long a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        a[i] = 1ll * a[i] * a[i];
    }
    sort(a, a + n);
    check(a,n) ? cout << "YES" : cout << "NO";
    return 0;
}

