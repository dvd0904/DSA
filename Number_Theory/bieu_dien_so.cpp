#include <bits/stdc++.h> 
using namespace std; 
int solution(int a, int b, int n){
    for (int i = 0; i * a <= n; i++){
        if ((n - (i * a)) % b == 0){
            int x= i;
            int y = (n - (i * a)) / b;
            if(x >=0 && y >= 0) return 1;
        }
    }
 
    return 0;
}
 
// linear diophantine equation 
int main(){
    int n; cin>>n;
    if(solution(11, 111, n)) cout <<"YES";
    else cout <<"NO";
    return 0;
}
