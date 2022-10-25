#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll const MOD = 1e9 + 7;
void findMax(int a[], int n, int pos = 0){
    int res = INT_MIN;
    for(int i = 0; i < n; i++){
        if(a[i] > res){
            pos = i;
            res = a[i];
        }
    }
    cout << a[pos] << " " << pos << endl;
}

void findMin(int a[], int n, int pos = 0){
    int res = INT_MAX;
    for(int i = 0; i < n; i++){
        if(a[i] <= res){
            pos = i;
            res = a[i];
        }
    }
    cout << a[pos] << " " << pos << endl;
}

bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return n > 1;
}

ll maxMul(int a[], int n){
    ll firstMax = INT_MIN, secondMax = INT_MIN;
    ll firstMin = INT_MAX, secondMin = INT_MAX;
    for(int i = 0; i < n; i++){
        if(a[i] > firstMax){
            secondMax = firstMax;
            firstMax = a[i];
        }else if(a[i] > secondMax){
            secondMax = a[i];
        }
        if(a[i] < firstMin){
            secondMin = firstMin;
            firstMin = a[i];
        }else if(a[i] < secondMin){
            secondMin = a[i];
        }
    }
    return max(firstMax * secondMax, firstMin * secondMin);
}

bool check(int a[], int n){
    int l = 0, r = n - 1;
    while(l < r){
        if(a[l] != a[r]) return false;
        l++; r--;
    }
    return true;
}

ll mul(int a[], int n){
    ll Mul = 1;
    for(int i = 0; i < n; i++){
        Mul *= 1ll * a[i];
        Mul %= MOD;
    }
    return Mul;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    findMax(a, n);
    findMin(a, n);
    int cnt = 0;
    for(int x : a){
        if(isPrime(x)) cnt++;
    }
    cout << cnt << endl;
    cout << maxMul(a , n) << endl;
    if(check(a, n)) cout << "YES\n";
    else cout << "NO\n";
    cout << mul(a , n);
}