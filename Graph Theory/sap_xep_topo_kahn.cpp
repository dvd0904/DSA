#include <bits/stdc++.h>
using namespace std;

int n, m, s, t;
vector<int> adj[1001];
bool visited[1001];
int degree[1001];
vector<int> topo;
void init()
{
    memset(degree, 0, sizeof(degree));
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        degree[y]++;
    }
    for (int i = 1; i <= n; i++)
        sort(begin(adj[i]), end(adj[i]));
    memset(visited, 0, sizeof(visited));
}

void kahn(int s)
{
    queue<int> Q;
    for (int i = 1; i <= n; i++)
    {
        if (!degree[i])
            Q.push(i);
    }
    while (!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        // xoa u
        cout << u << " ";
        for (int v : adj[u])
        {
            degree[v]--;
            if (degree[v] == 0)
                Q.push(v);
        }
    }
}

int main()
{
    init();
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            kahn(i);
        }
    }
    reverse(begin(topo), end(topo));
}