#include<bits/stdc++.h>
using namespace std;
int check[10000000];
void isPrime(){
    for(int i = 2; i <= 10000000; i++) check[i] = 1;
    for(int i = 2; i <= sqrt(10000000); i++){
        if(check[i]){
            for(int j = i*i; j <= 10000000; j += i) check[j] = 0;
        }
    }
}
int csnt(int n){
    while(n){
        int a = n % 10;
        if(a != 2 && a != 3 && a != 5 && a != 7)
            return 0;
        n /= 10;
    }
    return 1;
}
int dem(int a, int b){
    isPrime();
    int cnt = 0;
    for(int i = a; i <= b; i++){
        if(check[i] && csnt(i)) cnt++;
    }
    return cnt;
}
int main(){
    int a, b;
    cin >> a >> b;
    cout << dem(a, b);
    return 0;
}
