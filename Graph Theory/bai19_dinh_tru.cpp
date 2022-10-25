#include <bits/stdc++.h>
using namespace std;

vector<int> v[1001];
bool visited[10001];

void DFS(int u)
{
    visited[u] = 1;
    for (int x : v[u])
    {
        if (!visited[x])
            DFS(x);
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            ++ans; // dem thanh phan lien thong ban dau
            DFS(i);
        }
    }
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        memset(visited, 0, sizeof(visited));
        visited[i] = 1;
        int dem = 0;
        for (int j = 1; j <= n; j++)
        {
            if (!visited[j])
            {
                ++dem; // dem thanh phan lien thong
                DFS(j);
            }
        }
        // neu so thanh phan lien thong sau khi loai bo dinh > so thanh phan lien thong ban dau
        if (dem > ans)
            ++res;
    }
    cout << res;
}