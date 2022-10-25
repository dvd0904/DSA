#include<bits/stdc++.h>
using namespace std;
void lower(string &s){
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
}
int main(){
    string s1, s2; getline(cin, s1); getline(cin, s2);
    lower(s1); lower(s2);
    stringstream ss1(s1), ss2(s2);
    string w1, w2;
    set < string > S1, S2, res;
    while(ss1 >> w1){
        S1.insert(w1);
    }
    while(ss2 >> w2){
        S2.insert(w2);
    }
    for(string x : S1){
        if(S2.find(x) == S2.end()) res.insert(x);
    }
    for(string x : res) cout << x << " ";
}