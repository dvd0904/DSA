#include<bits/stdc++.h>
using namespace std;

bool check(int n){
    int r = n % 10;
    n /= 10;
    while(n){
        int tmp = n % 10;
        if(tmp > r) return false;
        else r = tmp;
        n /= 10;
    }
    return true;
}

bool cmp(pair < int, int > a, pair < int, int > b){
    if(a.second != b.second) return a.second > b.second;
    else{
        return a.first < b.first;
    }
}

int main(){
    int n; 
    map < int, int > M;
    vector < pair < int, int > > VP; 
    while(cin >> n){
        if(check(n)) M[n]++;
    }
    for(auto x : M) VP.push_back(x);
    sort(VP.begin(), VP.end(), cmp);
    for(auto x : VP){
        cout << x.first << " " << x.second << endl;
    }
}