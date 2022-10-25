#include <bits/stdc++.h>
using namespace std;

int n, m, s, t;
vector<int> adj[1001];
bool visited[1001];
vector<int> topo;
void init()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
    for (int i = 1; i <= n; i++)
        sort(begin(adj[i]), end(adj[i]));
    memset(visited, 0, sizeof(visited));
}

void dfs(int s)
{
    visited[s] = true;
    for (int v : adj[s])
    {
        if (!visited[v])
        {
            dfs(v);
        }
    }
    topo.push_back(s);
    for (int x : topo)
        cout << x << " ";
}

int main()
{
    init();
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
        }
    }
    reverse(begin(topo), end(topo));
}