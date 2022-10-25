#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[101][101];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 || i == n || j == 1 || j == n) cout << a[i][j] << " ";
        }
    }
}