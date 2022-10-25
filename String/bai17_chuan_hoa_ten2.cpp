#include<bits/stdc++.h>
using namespace std;
void Ho(string &s){
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
}
void Ten(string &s){
    for(int i = 0; i < s.size(); i++) s[i] = toupper(s[i]);
}
int main(){
    string s; getline(cin, s);
    stringstream ss(s);
    string word;
    vector < string > V;
    while(ss >> word){
        Ho(word);
        V.push_back(word);
    }
    Ten(V[V.size() - 1]);
    for(int i = 0; i < V.size(); i++){
        cout << V[i];
        if(i == V.size() - 2) cout << ", ";
        else cout << " ";
    }
    cout << endl;
    cout << V[V.size() - 1] << ", ";
    for(int i = 0; i < V.size() - 1; i++) cout << V[i] << " ";
    return 0;
}