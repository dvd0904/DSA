#include<bits/stdc++.h>
using namespace std;

int n, k, ok, a[100], b[100];
int nck(){
    int res = 1;
    int t = min(k, n - k);
    for(int i = 0; i < t; i++){
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}
void display(){
    for(int i = 1; i <= k; i++){
        cin >> b[i];
        a[i] = i;
    }
}

void next(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i) i--;
    if(i == 0) ok = 0;
    else{
        a[i]++;
        for(int j = i + 1; j <= k; j++) a[j] = a[j - 1] + 1;
    }
}

bool check(){
    for(int i = 1; i <= n; i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}
int main(){
    cin >> n >> k;
    display();
    ok = 1;
    int cnt = nck();
    while(ok){
        cnt--;
        if(check()){
            cout << cnt + 1 << endl;
            break;
        }
        next();
    }
}