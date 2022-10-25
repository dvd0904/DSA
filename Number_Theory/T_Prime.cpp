#include<bits/stdc++.h>
using namespace std;
long long Prime[1000000+1];
void sang(){
    for(long long i = 0; i <= 1000000; i++) Prime[i] = 1;
    Prime[0] = Prime[1] = 0;
    for(long long i = 2; i <= 1000; i++){
        if(Prime[i]){
            for(long long j = i * i ; j <= 1000000; j += i) Prime[j] = 0;
        }
    }
}
long long main(){
    sang();
    long long n;
    cin >> n;
    for(long long i = 1; i <= sqrt(n); i++){
        if(Prime[i]) cout << i * i << " ";
    }
    return 0;
}