#include <bits/stdc++.h>
using namespace std;
vector<int> near[1001];
bool visited[1001];
void bfs(int u)
{
    queue<int> Q;
    Q.push(u);
    visited[u] = 1;
    while (!Q.empty())
    {
        int x = Q.front();
        Q.pop();
        for (int v : near[x])
        {
            if (!visited[v])
            {
                Q.push(v);
                visited[v] = 1;
            }
        }
    }
}
int main()
{
}