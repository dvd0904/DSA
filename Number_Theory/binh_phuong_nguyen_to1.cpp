#include<bits/stdc++.h>
using namespace std;
int pt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        int cnt = 0;
        while(n % i == 0){
            cnt++;
            n /= i;
        }
        if(cnt >= 2) return 1;
    }
    return 0;
}
int main(){
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(pt(i)) cout << i <<" ";
    }
    return 0;
}
