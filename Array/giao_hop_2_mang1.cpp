#include<bits/stdc++.h>

using namespace std;

int d1[10000001] = {0}, d2[10000001] = {0};
int main(){
	int n, m; cin >> n >> m;
	int a1[n], a2[m];
	for(int &x : a1){
		cin >> x;
		d1[x]++;
	}
	for(int &x : a2){
		cin >> x;
		d2[x]++;
	}
	int m1 = *max_element(a1, a1+n);
	int m2 = *max_element(a2, a2+m);
	int r = max(m1, m2);
	vector<int> hop, giao;
	for(int i = 0; i <= r; i++){
		if(d1[i]&&d2[i]) giao.push_back(i);
		if(d1[i]||d2[i]) hop.push_back(i);
	}
	for(int x : giao) cout << x << " ";
	cout << endl;
	for(int x : hop) cout << x << " ";
}


