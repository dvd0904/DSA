#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int timeNeededToServe[n];
    for (int &x : timeNeededToServe)
        cin >> x;
    sort(timeNeededToServe, timeNeededToServe + n);
    int peopleDisappointed(0), waitingTime(0);
    for (int i = 0; i < n; i++)
    {
        if (waitingTime > timeNeededToServe[i])
            peopleDisappointed++;
        else
            waitingTime += timeNeededToServe[i];
    }
    cout << peopleDisappointed;
}