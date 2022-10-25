#include<bits/stdc++.h>
using namespace std;

int main(){
    int cnt = 0, cnt_c = 0, cnt_l = 0;
    int x;
    while(cin >> x){
        cnt++;
        if(x % 2 != 0) cnt_l++;
        else cnt_c++;
    }
    if( (cnt % 2 != 0 && cnt_l > cnt_c) || (cnt % 2 == 0 && cnt_c > cnt_l)) cout << "YES";
    else cout << "NO"; 
    return 0;
}
