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
        if(i &1 ){
            for(int j = 1; j <= n; j++) cout << a[i][j] << " ";
            cout << endl;
        }
        else{
            for(int j = n; j >= 1; j--) cout << a[i][j] << " ";
            cout << endl;
        }
    }
}