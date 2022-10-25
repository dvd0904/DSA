#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// kadene
int main()
{
    int n;
    cin >> n;
    vector<long long> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    ll currentSum = x[0];
    ll maxSubArraySum = x[0];
    for (int i = 1; i < n; i++)
    {
        /*
         * Continue the sub array sum or start a new
         * sub array sum beginning at the current element.
         */
        currentSum = max(currentSum + x[i], x[i]);
        // Store the maximum sub array sum at each iteration.
        maxSubArraySum = max(maxSubArraySum, currentSum);
    }
    cout << maxSubArraySum << endl;
}