#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[205][205];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int x, y; cin >> x >> y;
    for(int i = 0; i < n; i++){
        swap(a[x - 1][i], a[y - 1][i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
