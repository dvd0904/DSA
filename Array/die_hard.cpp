#include<bits/stdc++.h>
using namespace std;
int solve(int a[], int n){
	int cnt25 = 0, cnt50 = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == 25) cnt25++;
		else if(a[i] == 50){
			if(cnt25 == 0) return 0;
			cnt25--;
			cnt50++;
		}
		else{
			if(cnt25 == 0 || (cnt25*25 + cnt50*50 < 75)) return 0;
			if(cnt50!=0){
				cnt50--;
				cnt25--;
			}
			else{
				cnt25 -= 3;
			}
		}
	}
	return 1;
}
int main(){
	int n; cin>>n;
	int a[n];
	int sum = 0;
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	if(solve(a,n)) cout<<"YES";
	else cout<<"NO";
	return 0;
}

