#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    long long sum1 = 0, sum2 = 0, res = 0;
    int i = 0;
    // TH 1
    while(i < n){
        if(i < k) sum1 += a[i];
        else sum2 += a[i];
        i++;
    }
    res = abs(sum1 - sum2);
    int j = 0;
    // TH 2
    sum1 = 0, sum2 = 0;
    while(j < n){
        if(j < n - k) sum1 += a[j];
        else sum2 += a[j];
        j++;
    }
    res = max(res, abs(sum1 - sum2));
    cout << res;
    return 0;
}
