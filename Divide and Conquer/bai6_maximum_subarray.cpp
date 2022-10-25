// kadane algorithm or prefix sum
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<ll> prefixSum(n + 1);
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        prefixSum[i] = prefixSum[i - 1] + x;
    }
    ll maxSubArraySum = prefixSum[1];
    ll minPrefixSum = prefixSum[0];
    for (int i = 1; i <= n; i++)
    {
        maxSubArraySum = max(maxSubArraySum, prefixSum[i] - minPrefixSum);
        minPrefixSum = min(minPrefixSum, prefixSum[i]);
    }
    cout << maxSubArraySum;
}