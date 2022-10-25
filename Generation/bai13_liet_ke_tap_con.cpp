#include<bits/stdc++.h>
using namespace std;
int n, ok, a[1001];
void init(){
    for(int i = 1; i <= n; i++) a[i] = 0;
}
void next(){
    int i = n; 
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0) ok = 0;
    else a[i] = 1;
}
int main(){
    cin >> n;
    ok = 1;
    init();
    vector < string > V;
    next();
    while(ok){
        string res = "";
        for(int i = 1; i <= n; i++){
            if(a[i] == 1){
                res += to_string(i) + " ";
            }
        }
        V.push_back(res);
        next();
    }
    sort(V.begin(), V.end());
    for(string x : V) cout << x << endl;
}