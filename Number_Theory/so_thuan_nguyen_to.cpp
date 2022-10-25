#include <bits/stdc++.h>
using namespace std;
int isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
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
int tongnt(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return isPrime(sum);
}
int main(){
    int a, b, cnt=0;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
           if(csnt(i) && isPrime(i) && tongnt(i)) cnt++;
   }
    cout << cnt;
    return 0;
}