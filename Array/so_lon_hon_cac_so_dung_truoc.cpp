#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	int MAX = a[0];
	cout << a[0] << " ";
	for(int i = 1; i < n; i++){
		if(a[i] > MAX){
			MAX = a[i];
			cout << a[i] << " ";
		}
	}
}

