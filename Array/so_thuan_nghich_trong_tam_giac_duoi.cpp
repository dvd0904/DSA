#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    int temp = n;
    int tn = 0;
    while(n){
        tn = tn * 10 + n % 10;
        n /= 10;
    }
    if(tn == temp) return 1;
    return 0;
}
int main(){
    int n; cin >> n;
    int a[205][205];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(check(a[i][j])) cnt++;
        }
    }
    cout << cnt;
}