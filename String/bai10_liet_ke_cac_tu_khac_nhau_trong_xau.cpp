#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; getline(cin, s);
    stringstream ss(s);
    string temp;
    vector < string > V;
    set < string > S;
    map < string, int > M;
    int cnt = 0;
    while(ss >> temp){
        M[temp]++;
        S.insert(temp);
        V.push_back(temp);
    }
    for(string x : S) cout << x << " ";
    cout << endl;
    for(string x : V){
        if(M[x]){
            cout << x << " ";
            M[x] = 0;
        }
    }
}