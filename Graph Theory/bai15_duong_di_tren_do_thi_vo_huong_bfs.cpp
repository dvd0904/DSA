#include <bits/stdc++.h>
using namespace std;

int n, m, s, t;
vector<int> adj[1001];
bool visited[1001];
int parent[1001];
void init()
{
    cin >> n >> m >> s >> t;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
        sort(begin(adj[i]), end(adj[i]));
    memset(visited, 0, sizeof(visited));
}

void bfs(int s)
{
    queue<int> Q;
    Q.push(s);
    visited[s] = 1;
    while (!Q.empty())
    {
        int v = Q.front();
        Q.pop();
        for (int x : adj[v])
        {
            if (!visited[x])
            {
                Q.push(x);
                visited[x] = 1;
                parent[x] = v;
            }
        }
    }
}

void solve()
{
    bfs(s);
    vector<int> res;
    if (visited[t])
    {
        while (t != s)
        {
            res.push_back(t);
            t = parent[t];
        }
        res.push_back(s);
        reverse(res.begin(), res.end());
        for (int x : res)
            cout << x << " ";
    }
    else
        cout << -1;
}

int main()
{
    init();
    solve();
}