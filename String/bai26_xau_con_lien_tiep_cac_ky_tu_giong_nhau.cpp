#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    string res, Max;
    res = s[0], Max = res;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i - 1]){
            res += s[i];
        }
        else{
            res = s[i];
        }
        if(res.length() > Max.length() || (res.length() == Max.length() && res > Max)) Max = res;
    }
    cout << Max;
    return 0;
}