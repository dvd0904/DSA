#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

ll n, m, a[500][500];


int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++) cin >> a[i][j];
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i == 1) a[i][j] += a[i][j - 1];
            else if(j == 1) a[i][j] += a[i - 1][j];
            else a[i][j] += max(a[i - 1][j], a[i][j - 1]);
        }
    }
    cout << a[n][m] << endl;
}
