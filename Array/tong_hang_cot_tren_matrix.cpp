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
    for(int i = 0; i < n; i++){
        long long s1 = 0;
        for(int j = 0; j < m; j++){
            s1 += a[i][j];
        }
        cout << s1 << " ";
    }
    cout << endl;
    for(int i = 0; i < m; i++){
        long long s2 = 0;
        for(int j = 0; j < n; j++) s2 += a[j][i];
        cout << s2 << " ";
    }
    
}