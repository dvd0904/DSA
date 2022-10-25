#include<bits/stdc++.h>
using namespace std;
vector < int > res;
int main(){
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int j = 0; j < n; j++) cin >> b[j];
    sort(a, a + n);
    sort(b, b + n, greater<int>());
    for(int i = 0; i < n; i++){
        res.push_back(a[i]);
        res.push_back(b[i]);
    }
    for(int x : res) cout << x << " ";
    return 0;
}
