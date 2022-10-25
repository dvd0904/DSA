#include<bits/stdc++.h>
using namespace std;
int Prime[10000000+1];
void Sang(){
    for(int i = 2;i <= 10000000; i++) Prime[i] = 1;
    Prime[0] = Prime[1] = 0; 
    for(int i = 2; i <= sqrt(10000000); i++){
        if(Prime[i]){
            for(int j = i * i; j <= 10000000; j += i)
                Prime[j] = 0;  
        }
    }
}
int chuSoCuoi(int n){
    int a = n % 10;
    while(n){
    	n /= 10;
        if(a < n % 10) return 0;
    }
    return 1;
}
int main(){
    int n, count=0;
    cin >> n;
    Sang();
    for(int i = 2; i <= n; i++){
        if(Prime[i] && chuSoCuoi(i)){
            count++;
            cout << i <<" ";
        }
    }
    cout << endl << count;
    return 0;
}

