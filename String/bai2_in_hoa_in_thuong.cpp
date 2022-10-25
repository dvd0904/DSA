#include<bits/stdc++.h>
using namespace std; 
int main(){
    string s; getline(cin, s);
    for(char x : s){
        if(islower(x)){
            x = (char)toupper(x);
        }
        cout << x;
    }
    cout << endl;
    for(char x : s){
        if(isupper(x)) x = (char)tolower(x);
        cout << x;
    }
}