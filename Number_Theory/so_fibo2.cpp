#include<bits/stdc++.h>
using namespace std;
long long A[1000000];
void lietKe(){
    A[0] = 0;
    A[1] = 1;
    for(int i = 2;i <= 100; i++){
        A[i] = A[i-1] + A[i-2];
    }
}
int main(){
    lietKe();
    long long n;
    cin >> n;
    int check=0;
    for(int i = 0; i <= 100; i++){
        if(A[i] == n){
            check = 1; break;
        }
    }
    if(check) cout << "YES";
    else cout << "NO";
    return 0;
}
