#include<bits/stdc++.h>
using namespace std;
void solve(int a[], int n){
    int cnt = 1, res = 0, index;
    for(int i = 1; i < n; i++){
        if(a[i] > a[i - 1]) cnt++;
        else{
            cnt  = 1;
        }
        if(cnt >= res){
            res = cnt;
            index = i - res + 1; // chi so bat dau cua day 
        }
    }
    cout << res << endl;
    for(int i = 0; i < res; i++){
        cout << a[index + i] << " ";
    }
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    solve(a, n);
    return 0;
}
