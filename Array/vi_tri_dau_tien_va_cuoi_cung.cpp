#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x; cin >> n >> x;
    int a[n]; 
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    int start_index = -1, end_index = -1;
    for(int i = 1; i <= n; i++){
        if(a[i] ==  x){
            if(start_index == -1){
                start_index = i;
                cout << i << " ";
            }
            end_index = i;
        }
    }
    if(start_index == -1) cout << "-1" << " " << "-1";
    else cout << end_index;
    
    return 0;
}
