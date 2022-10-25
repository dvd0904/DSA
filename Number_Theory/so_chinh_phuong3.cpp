#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    long long a1 = sqrt(a), b1 = sqrt(b);
    if(a1 * a1 != a) a1 += 1;
    cout << (b1 - a1) + 1;
    return 0;
}
