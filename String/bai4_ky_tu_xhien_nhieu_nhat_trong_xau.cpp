#include<bits/stdc++.h>
using namespace std;
map < char, int > M;
vector < pair < char, int > > V1;
bool cmp(pair < char, int > a, pair < char, int > b){
    if(a.second == b.second) return a.first < b.first;
    else return a.second < b.second;
}
int main(){
    map < char, int > M;
    string s; cin >> s;
    for(char x : s) M[x]++;
    for(auto x : M){
        V1.push_back({x.first, x.second});
    }
    sort(V1.begin(), V1.end(), cmp);
    cout << V1[V1.size() - 1].first << " " << V1[V1.size() - 1].second << endl;
    char res = V1[0].first;
    for(long long i = 1; i < V1.size(); i++){
        if(V1[i].second == V1[0].second){
            res = V1[i].first;
        }
    }
    cout << res << " " << V1[0].second;
}