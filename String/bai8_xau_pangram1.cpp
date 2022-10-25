#include<bits/stdc++.h>
using namespace std;
void lower(string &s){
    for(char &x : s){
        x = tolower(x);
    }
}
int main(){
    string s; cin >> s;
    set < char > S;
    lower(s);
    for(char x : s) S.insert(x);
    if(S.size() == 26) cout << "YES";
    else cout << "NO";
}