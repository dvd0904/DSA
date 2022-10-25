#include <bits/stdc++.h>
using namespace std;
int n, cost[100][100], city_standing[100], city_visited[100];
int res = INT_MAX;
void init()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> cost[i][j];
    }
}
void Try(int i, int sum)
{
    for (int j = 2; j <= n; j++)
    {
        if (!city_visited[j])
        {
            city_standing[i] = j;
            city_visited[j] = 1;
            // the man who standing in the city [i -1] wanna move to [i]
            // => + cost from city [i - 1] to [i]
            sum += cost[city_standing[i - 1]][city_standing[i]];
            // cost[i][j] meaning cost from city i to city j
            if (i == n)
            {
                sum += cost[city_standing[i]][city_standing[1]];
                res = min(res, sum);
            }
            else
                Try(i + 1, sum);
            city_visited[j] = 0;
            sum -= cost[city_standing[i - 1]][city_standing[i]];
        }
    }
}
int main()
{
    init();
    city_standing[1] = 1;
    city_visited[1] = 1;
    Try(2, 0);
    cout << res;
}