#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; getline(cin, s);
    stringstream ss(s);
    string temp;
    int cnt = 0;
    while(ss >> temp) cnt++;
    cout << cnt;
}