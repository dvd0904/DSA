#include <bits/stdc++.h>
using namespace std;
vector<int> near[1001];
bool visited[1001];

void dfs(int i)
{
    cout << i << " ";
    visited[i] = 1;
    for (int v : near[i])
    {
        if (!visited[v])
            dfs(v);
    }
}

int main()
{
    int n, m, s;
    cin >> n >> m >> s;
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        near[x].push_back(y);
        near[y].push_back(x);
    }
    memset(visited, 0, sizeof(visited));
    for (int i = 1; i <= n; i++)
        sort(begin(near[i]), end(near[i]));
    dfs(s);
}