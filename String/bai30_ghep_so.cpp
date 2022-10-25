#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
    return a + b > b + a;
}
int main(){
    string s; cin >> s;
    s += 'a';
    vector < string > V;
    string num = "";
    for(int i = 0; i < s.length(); i++){
        if(isdigit(s[i])){
            num += s[i];
        }
        else{
            while(num.length() > 1 && num[0] == '0'){
                num.erase(0, 1);
            }
            if(num != "") V.push_back(num);
            num = "";
        }
    }
    sort(V.begin(), V.end(), cmp);
    for(string x : V) cout << x;
}