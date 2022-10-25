/*    hoan vi lap  */
#include<bits/stdc++.h>
using namespace std;
long long gt(int n){
    if(n==0 || n ==1) return 1;
    else return n * gt(n-1);
}
int main(){
    int n, k1, k2, k3, k4;
    cin >> n >> k1 >> k2 >> k3 >> k4;
    long long a = gt(n);
    long long b = gt(k1) * gt(k2) * gt(k3) * gt(k4);
    cout << a/b;
    return 0;
}
