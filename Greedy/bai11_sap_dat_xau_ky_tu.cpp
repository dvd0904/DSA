#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    vector<int> V(256, 0);
    for (char x : s)
        V[x]++;
    multiset<int> MS;
    for (int i = 0; i <= 255; i++)
    {
        if (V[i] > 0)
            MS.insert(V[i]);
    }
    while (k--)
    {
        int it = *MS.rbegin();
        auto ite = MS.find(it);
        MS.erase(ite);
        MS.insert(it - 1);
    }
    long long sum = 0;
    for (auto x : MS)
        sum += 1ll * x * x;
    cout << sum << endl;
}