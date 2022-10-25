#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    string py = "python";
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(cnt >= 6) break;
        if(s[i] == py[cnt]) cnt++;
    }
    if(cnt == 6) cout << "YES";
    else cout << "NO";
     
}