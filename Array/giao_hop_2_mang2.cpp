#include<bits/stdc++.h>
using namespace std;
vector< int > giao, hop;
int main(){
    int n, m; cin >> n >> m;
    vector < int > a(n), b(m);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int j = 0; j < m; j++){
        cin >> b[j];
    }
    int i = 0, j = 0;
    while(i < n && j < m){
        if(a[i] == b[j]){
            hop.push_back(a[i]);
            giao.push_back(b[j]);
            ++i; ++j;
        }
        else if(a[i] < b[j]){
            hop.push_back(a[i]);
            ++i;
        }
        else{
            hop.push_back(b[j]);
            ++j;
        }
    }
    while(i < n){
        hop.push_back(a[i]);
        ++i;
    }
    while(j < m){
        hop.push_back(b[j]);
        ++j;
    }
    for(int x : hop) cout << x << " ";
    cout << endl;
    for(int y : giao) cout << y << " ";
    return 0;
}
