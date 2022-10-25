#include<bits/stdc++.h>
using namespace std;
int locPhat(long long n){
	int a;
	while(n){
		a = n % 10;
		if(a != 0 && a != 6 && a != 8) return 0;
		n /= 10;
	}
	return 1;
}
int main(){
	long long n;
	cin >> n;
	if(locPhat(n)) cout << 1;
	else cout << 0;
	return 0;
}

