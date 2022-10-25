#include<bits/stdc++.h>
using namespace std;
string cmp(string current_num, string res){
    int l1 = current_num.length();
    int l2 = res.length();
    if(l1 == l2){
        int i = 0;
        while(current_num[i] == res[i]) i++;
        return current_num[i] < res[i] ? res : current_num;
    }
    return l1 > l2 ? current_num : res;
}
string maximum(string s){
    s += 'a';
    string current_num = "";
    string res;
    for(int i = 0; i < s.length(); i++){
        while(i < s.length() && s[i] == '0') i++;
        while(i < s.length() && isdigit(s[i])){
            current_num += s[i];
            i++;
        }
        if(i == s.length()) break;
        res = cmp(current_num, res);
        current_num = "";
    }
    if(current_num.size() == 0 && res.size() == 0) res += '0';
    return res;
}
int main(){
    string s; cin >> s;
    cout << maximum(s);
}