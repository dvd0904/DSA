#include<bits/stdc++.h>
using namespace std;
bool cmp(pair < string, int > s1, pair < string, int > s2){
    if(s1.second == s2.second) return s1.first < s2.first;
    else return s1.second < s2.second;
}
int main(){
    string s; getline(cin, s);
    stringstream ss(s);
    vector < pair < string, int > > V;
    string tmp;
    map < string, int > M;
    while(ss >> tmp){
        M[tmp]++;
    }
    for(auto x : M) V.push_back({x.first, x.second});
    sort(V.begin(), V.end(), cmp);
    cout << V[V.size() - 1].first << " " << V[V.size() - 1].second << endl;
    string res = V[0].first;
    for(int i = 1; i < V.size(); i++){
        if(V[i].second == V[0].second){
            res = V[i].first;
        }
    }
    cout << res << " " << V[0].second;
}