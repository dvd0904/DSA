#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int a[205][205];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int Min = INT_MAX, Max = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            Min = min(Min, a[i][j]);
            Max = max(Max, a[i][j]);
        }
    }
    cout << Min << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == Min) cout << i + 1 << " " << j + 1 << endl;
        }
    }
    cout << Max << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == Max) cout << i + 1 << " " << j + 1 << endl;
        }
    }
}