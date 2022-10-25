#include<bits/stdc++.h>
using namespace std;
bool cmp1(string s1, string s2){
    return s1 < s2;
}
bool cmp2(string s1, string s2){
    if(s1.size() == s2.size()) return s1 < s2;
    return s1.size() < s2.size();
}
int main(){
    string s; getline(cin, s);
    stringstream ss(s);
    vector < string > V1, V2;
    string word;
    while(ss >> word){
        V1.push_back(word);
        V2.push_back(word);
    }
    sort(V1.begin(), V1.end(), cmp1);
    for(string x : V1) cout << x << " ";
    cout << endl;
    sort(V2.begin(), V2.end(), cmp2);
    for(string x : V2) cout << x << " ";
     

}