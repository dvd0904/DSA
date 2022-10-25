#include<bits/stdc++.h>
using namespace std;
vector < int > Even, Odd;
int main(){
	int n, x; cin >> n;
	for(int i = 0; i < n; i++){
		cin >> x;
		if(x & 1) Odd.push_back(x);
		else Even.push_back(x);
	}
	sort(Odd.begin(), Odd.end(), greater< int >());
	sort(Even.begin(), Even.end());
	for(int x : Odd) cout << x << " ";
	for(int x : Even) cout << x << " ";
}

