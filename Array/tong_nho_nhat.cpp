#include<bits/stdc++.h>
using namespace std;

int main(){
    vector < int > a;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int value; cin >> value;
        if(value != 0) a.push_back(value);
    }
    sort(a.begin(), a.end());
    long long x = 0, y = 0;
    for(int i = 0; i < a.size(); i++){
        if(i % 2 == 0) x = 10 * x + a[i];
        else y = 10 * y + a[i];
    }
    cout << x + y;
    return 0;
}
