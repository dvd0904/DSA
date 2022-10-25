// x = {1, 2, 3...n} counting gcd(x, n) using euler
#include<bits/stdc++.h>
using namespace std;
long long Solve(long long n){
    long long euler = n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0) n /= i;
            euler -= euler / i;
        }
    }
    if(n != 1) euler -= euler / n;
    return euler;
}    
int main(){
    long long n;
    cin >> n;
    cout << Solve(n);
    return 0;
}
