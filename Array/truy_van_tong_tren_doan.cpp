#include<bits/stdc++.h>
using namespace std;
vector < long long > a(1e6);
int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int Q; cin >> Q;
    while(Q--){
        long long sum = 0;
        int l, r; cin >> l >> r;
        for(int i = l; i <= r; i++){
            sum += a[i];
        }
        cout << sum << endl;
    }
    return 0;
}
