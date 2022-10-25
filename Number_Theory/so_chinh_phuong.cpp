#include<bits/stdc++.h>
using namespace std;
int square(long long n){
    long long a = sqrt(n);
    if(a * a == n) return 1;
    return 0;
}
int main(){
    long long n;
    cin >> n;
    if(square(n)) cout <<"YES";
    else cout <<"NO";
    return 0;
}
