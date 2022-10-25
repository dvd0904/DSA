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
    vector < string > V1, V2;
    while(ss1 >> w1){
        V1.push_back(w1);
    }
    while(ss2 >> w2){
        V2.push_back(w2);
    }
    sort(V1.begin(), V1.end()); 
    sort(V2.begin(), V2.end());
    set < string > S;
    int i = 0, j = 0;
    while(i < V1.size() && j < V2.size()){
        if(V1[i] == V2[j]){
            S.insert(V1[i]);
            ++i; ++j;
        }
        else if(V1[i] < V2[j]) ++i;
        else ++j;
    }
    for(string x : S) cout << x << " ";
}