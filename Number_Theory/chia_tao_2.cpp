#include<bits/stdc++.h>
using namespace std;
long long starsAndBars(int n, int k){
    long long res = 1;
    if (k > n - k)
           k = n - k;   

    for (int i = 0; i <k; ++i){
        res = res * (n-i) ;
        res = res / (i+1);
    }
    return res;
}

int main( ){
    int n, m;
    cin >> n >> m;
    cout << starsAndBars(n + m - 1, m);
    return 0;
}