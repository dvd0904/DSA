#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return n > 1;
}
int sum(string s){
    int sum = 0;
    for(char x : s){
        sum += x - '0';
    }
    return sum;
}
bool check(string s){
    for(char x : s){
        int a = x - '0';
        if(!isPrime(a)) return false;
    }
    return true;
}
int main(){
    string s; cin >> s;
    if(check(s) && isPrime(sum(s))) cout << "YES";
    else cout << "NO";
}