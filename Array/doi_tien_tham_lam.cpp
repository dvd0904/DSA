#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n; cin>>n;
    int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    long long cnt=0;
    for(int i = 9 ; i >= 0; i--){
        cnt += n/a[i];
        n %= a[i];
    }
    cout<<cnt;
    return 0;
}
