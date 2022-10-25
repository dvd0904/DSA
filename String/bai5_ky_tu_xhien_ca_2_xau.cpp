#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t; cin >> s >> t;
    int cnt[256] = {0};
    for(char x : s){
        cnt[x] = 1;
    }
    for(char x : t){
        if(cnt[x] == 1) cnt[x] = 2;
        else if(cnt[x] == 0) cnt[x] = -1;
    }
    for(int i = 0; i < 256; i++){
        if(cnt[i] == 2){
            cout << (char)(i);
        }
    }
    cout << endl;
    for(int i = 0; i < 256; i++){
        if(cnt[i] != 0){
            cout << (char)(i);
        }
    }
}
