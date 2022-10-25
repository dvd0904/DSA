#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; getline(cin, s);
    int cnt_alpha = 0, cnt_digit = 0, cnt_spe = 0;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            cnt_digit++;
        }
        else if(isalpha(s[i])){
            cnt_alpha++;
        }
        else{
            cnt_spe++;
        }
    }
    cout << cnt_alpha << " " << cnt_digit << " " << cnt_spe;
}