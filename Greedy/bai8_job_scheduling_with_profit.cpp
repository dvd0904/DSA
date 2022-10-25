#include <bits/stdc++.h>
using namespace std;
struct job
{
    int ID, deadline, profit;
};
bool cmp(job a, job b)
{
    return a.profit > b.profit;
}
int main()
{
    int n;
    cin >> n;
    job cv[n];
    for (int i = 0; i < n; i++)
        cin >> cv[i].ID >> cv[i].deadline >> cv[i].profit;
    sort(cv, cv + n, cmp);
    bool time_used[n] = {0};
    long long res = 0;
    for (int i = 0; i < n; i++)
    {
        // cv[i].deadline - 1 because each job spend 1 time unit
        // ex: job have deadline 1 was made from time 0 to 1
        for (int j = cv[i].deadline - 1; j >= 0; j--)
        {
            if (!time_used[j])
            {
                res += cv[i].profit;
                time_used[j] = true;
                break;
            }
        }
    }
    cout << res;
}