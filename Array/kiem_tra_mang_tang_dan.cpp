#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	int ok = 1;
	for(int i = 0; i < n - 1; i++){
		if(a[i] >= a[i + 1]){
			ok = 0; break;
		}
	}
	if(ok) cout << "YES";
	else cout << "NO";
}

