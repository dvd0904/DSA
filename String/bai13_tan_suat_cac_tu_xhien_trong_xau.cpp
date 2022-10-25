#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; getline(cin, s);
    stringstream ss(s);
    string word;
    map < string, int > M;
    vector < pair < string, int > > V;
    vector < string > V1;
    while(ss >> word){
        M[word]++;
        V1.push_back(word);
    }
    for(auto x : M){
        cout << x.first << " " << x.second << endl;
    }
    for(string x : V1){
        if(M[x]){
            V.push_back({x, M[x]});
            M[x] = 0;
        }
    }
    cout << endl;
    for(auto x : V){
        cout << x.first << " " << x.second << endl;
    }
}