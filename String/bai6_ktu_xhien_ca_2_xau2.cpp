#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2; cin >> s1 >> s2;
    map < char, int > M;
    set < char > S1, S2;
    for(char x : s1) S1.insert(x);
    for(char x : s2) S2.insert(x);
    for(char x : S1){
        if(!S2.count(x)) cout << x;
    }
    cout << endl;
    for(char x : S2){
        if(!S1.count(x)) cout << x;
    }
}