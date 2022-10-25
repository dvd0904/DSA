#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9+7;
void printPascal(int n){
    ll C[n+1][n+1];
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(j == 0 || j == i){
                C[i][j] = 1;
                cout << C[i][j] <<" ";
            }
            else{
                C[i][j] = (C[i-1][j-1] % mod + C[i-1][j] % mod) % mod;
                cout << C[i][j] <<" ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printPascal(n);
    return 0;
}