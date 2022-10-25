#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n, m; cin >> n >> m;
    int b[m];
    multiset < int > a;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.insert(x);
    }
    for(int &x : b) cin >> x;
    int j = 0;
    while(j < m){
        if(a.size() == 0) cout << -1 << endl;
        else{
            auto it = a.upper_bound(b[j]);
            if(it == a.begin()) cout << -1 << endl;
            else{
                --it;
                if(*it <= b[j]){
                    cout << *it << endl;
                    a.erase(it);
                }
                else cout << -1 << endl;
            }
        }
        ++j;
    }
}