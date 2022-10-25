#include<bits/stdc++.h>
using namespace std;
long long fib[100];
void init(){
    fib[0] = 0; fib[1] = 1;
    for(int i = 2; i <= 90; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}
int main(){
    int n; cin >> n;
    long long a[101][101], cnt = 0;
    init();
    for(int vong  = 0; vong < (n + 1) / 2; vong ++){
        for(int j = vong; j < n - vong; j++) a[vong][j] = fib[cnt++];
        for(int i = vong + 1; i < n - vong; i++) a[i][n - vong - 1] = fib[cnt++];
        for(int k = n - 2 - vong; k >= vong; k--) a[n - 1 - vong][k] = fib[cnt++];
        for(int l = n - 2 - vong; l > vong; l--) a[l][vong] = fib[cnt++];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}