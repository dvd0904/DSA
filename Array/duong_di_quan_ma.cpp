#include <bits/stdc++.h>
using namespace std;
int dx[8] = {-2, -2, -1, -1, +1, +1, +2, +2}; 
int dy[8] = {-1, +1, -2, +2, -2, +2, -1, +1};
int n, a[101][101];
void Try(int i, int j){
    a[i][j] = 0;
    for(int k = 0; k < 8; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == 1){
            Try(i1, j1);
        }
    }
}
int main(){
    cin >> n;
    int s, t, u, v;
    cin >> s >> t >> u >> v;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    }
    Try(s, t);
    if(a[u][v] == 1){
        cout << "NO" << endl;
    }
    else cout << "YES" << endl;
}
