#include<bits/stdc++.h>
using namespace std;
vector < int > cnt(1e6+1);
void check(int a[], int n){
    int ok = 0;
    for(int i = 0; i < n; i++){
        if(cnt[ a[i] ] == 1){
            cout << a[i];
            ok = 1;
            break;
        }
        cnt[ a[i] ] = 1;
    }
    if(ok == 0) cout << -1;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    check(a,n);
    return 0;
}
