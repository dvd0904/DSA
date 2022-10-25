#include<bits/stdc++.h>
using namespace std;
int thuanNghich(int n){
	int tn = 0, temp = n;
	while(n){
		tn = tn * 10 + n % 10;
		n /= 10;
	}
	if(tn == temp) return 1;
	return 0;
}
int locPhat(int n){
	while(n){
		int a = n % 10;
		if(a == 6) return 1;
		n /= 10;
	}
	return 0;
}
int tongCS(int n){
	int sum=0;
	while(n){
		sum += n % 10;
		n /= 10;
	}
	if(sum % 10 == 8) return 1;
	return 0;
}
int main(){
	int a, b;
	cin >> a >> b;
	for(int i = a; i <= b; i++){
		if(thuanNghich(i) && tongCS(i) && locPhat(i)) cout << i <<" ";
	}
	return 0;
}

