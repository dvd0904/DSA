#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n + 1][n + 1];
    map<int, int> mp;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    } 
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(mp[a[i][j]] == i - 1){
                mp[a[i][j]] = i;
            }
        }
    } 
    bool ok = false;
    for(auto it : mp){
        if(it.second == n) {cout << it.first << ' '; ok = true;}
    }
    if(!ok) cout << "NOT FOUND\n";
}
