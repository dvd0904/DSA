#include<bits/stdc++.h>
using namespace std;
long long rev(long long n){
    long long res = 0;
    while(n){
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}
void Solve(long long n){                                            
    int cnt2 = 0, cnt3 = 0, cnt5 = 0, cnt7 = 0;
    long long m = rev(n);
    while(n){
        int a = n % 10;
        if(a == 2) cnt2++;
        if(a == 3) cnt3++;
        if(a == 5) cnt5++;
        if(a == 7) cnt7++;
        n/=10;
    }
    if(cnt2 != 0) cout << 2 <<" "<< cnt2 <<endl;
    if(cnt3 != 0) cout << 3 <<" "<< cnt3 <<endl;
    if(cnt5 != 0) cout << 5 <<" "<< cnt5 <<endl;
    if(cnt7 != 0) cout << 7 <<" "<< cnt7 <<endl << endl;
    while(m){
        int a = m % 10;
        if(a == 2 && cnt2 != 0){
            cout << 2 <<" "<< cnt2 << endl;
            cnt2 = 0;
        }
        else if(a == 3 && cnt3 != 0){
            cout << 3 <<" "<< cnt3 << endl;
            cnt3 = 0;
        }
        else if(a == 5 && cnt5 != 0){
            cout << 5 <<" "<< cnt5 << endl;
            cnt5 = 0;
        }
        else if(a == 7 && cnt7 != 0){
            cout << 7 <<" "<< cnt7 << endl;
            cnt7 = 0;
        }
        m /= 10;
    }
}
int main(){
    long long n; cin >> n;
    Solve(n);
    return 0;
}
