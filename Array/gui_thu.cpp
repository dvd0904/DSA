#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int Min, Max;
	for(int i = 0; i < n; i++){
		if(i == 0){
			Min = a[1] - a[0];
			Max = a[n-1] - a[0];
			cout << Min <<" "<< Max << endl;
		}else if(i == n - 1){
			Min = a[n - 1] - a[n - 2];
			Max = a[n - 1] - a[0];
			cout << Min <<" "<< Max << endl;
		}else{
			Min = min(a[i] - a[i-1], a[i+1] - a[i]);
			Max = max(a[i] - a[0], a[n-1] - a[i]);
			cout << Min <<" "<< Max << endl;
		}
	}
	return 0;
}

