#include<bits/stdc++.h>
using namespace std;
vector < int > cnt(10000001);
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        cnt [ a[i] ]++;
    }
    for(int i = 0; i <= 1e7; i++){
        if(cnt[i]){
            cout << i << " " << cnt[i] << endl;
        }
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        if(cnt[ a[i] ]){
            cout << a[i] << " " << cnt[ a[i] ] << endl;
            cnt[ a[i] ] = 0;
        }
    }
    return 0;
}
