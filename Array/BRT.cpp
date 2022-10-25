#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    vector <long long> res;
    for(int i = 1; i < n; i++){
        res.push_back(a[i] - a[i-1]);
    }
    long long dis = *min_element(res.begin(), res.end());
    int cnt = 0;
    for(int i = 0; i < res.size(); i++){
        if(dis == res[i]) cnt++;
    }
    cout << dis << " " << cnt;
    return 0;
}
