#include <bits/stdc++.h>
using namespace std;
int arr[1000005];
int maxGCD(int arr[], int n){
    int high = 0;
    for (int i = 0; i < n; i++) high = max(high, arr[i]);
    int count[high + 1] = {0};
    for (int i = 0; i < n; i++) count[arr[i]]++;
    int counter = 0;
    int res;
    for (int i = high; i >= 1; i--){
        int j = i;
        counter = 0;
        while (j <= high){
            if(count[j] >=2){
                res = j;
                goto label;
            }
            else if (count[j] == 1) counter++;        
            j += i;
            if (counter == 2){
                res = i;
                goto label;
            }
        }
    }
    label:
        return res;
}
 
int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << maxGCD(arr, n);
 
    return 0;
}