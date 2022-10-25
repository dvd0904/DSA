#include<bits/stdc++.h>
using namespace std; 
int main(){
    string s; cin >> s;
    map < char, int > M;
    int dem[256] = {0};
    for(char x : s) M[x]++;
    for(auto x : M) cout << x.first << " " << x.second << endl;
    cout << endl;
    for(char x : s){
        dem[(int)x]++;
    }
    for(char x : s){
        if(dem[(int)x] != 0){
            cout << x << " " << dem[(int)x] << endl;
            dem[(int)x] = 0;
        }
    }
}