#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[205][205], b[205][205];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) b[i][j] = a[j][i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            sort(b[i], b[i] + n);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << b[j][i] << " ";
        }
        cout << endl;
    }
}
