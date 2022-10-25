#include<bits/stdc++.h>
using namespace std;
void solve(int m, int s){
    if(s > 9 * m || (s == 0 && m > 1)){
        cout << "NOT FOUND" << endl;
        return;
    }
    int a[m] = {0}, b[m] = {0};
    int s1 = s;
    for(int i = 0; i < m; i++){
        if(s >= 9){
            a[i] = 9;
            s -= 9;
        }
        else if(s != 0){
            a[i] = s;
            s = 0;
        }
        else break;
    }
    --s1;
    for(int i = m - 1; i > 0; i--){
        if(s1 >= 9){
            b[i] = 9;
            s1 -= 9;
        }
        else if(s1 != 0){
            b[i] = s1; 
            s1 = 0;
        }
        else b[i] = s1;
    }
    b[0] = s1 + 1;
    for(int x : b) cout << x;
    cout << endl;
    for(int x : a) cout << x;
}
int main(){
    int m, s; cin >> m >> s;
    solve(m, s);
}