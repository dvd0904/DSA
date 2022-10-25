#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    int l = 0, r = s.size() - 1;
    while(l < r){
        if(s[l] != s[r]) return false;
        l++; r--;
    }
    return true;
}
bool cmp(string s1, string s2){
    return s1.size() < s2.size();
}
int main(){
    string s; getline(cin, s);
    vector < string > V;
    stringstream ss(s);
    string word;
    set < string > used;
    while(ss >> word){
        if(!used.count(word) && check(word)){
            V.push_back(word);
            used.insert(word);
        }
    }
    stable_sort(V.begin(), V.end(), cmp);
    for(string x : V) cout << x << " ";
}