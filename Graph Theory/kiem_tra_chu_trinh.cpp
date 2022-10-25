// bool dfs(int u)
// {
//     visited[u] = true;
//     for (int v : adj[u])
//     {
//         if (!visited[v])
//         {
//             if (dfs(v))
//                 return true;
//             parent[v] = u;
//         }
//         else if (v != parent[u])
//         {
//             return true;
//         }
//     }
//     return false;
// }

// bool bfs(int u)
// {
//     queue<int> q;
//     q.push(u);
//     visited[u] = true;
//     while (!q.empty())
//     {
//         int u = q.front();
//         q.pop();
//         for (int v : adj[u])
//         {
//             if (!visited[v])
//             {
//                 q.push(v);
//                 visited[v] = true;
//                 parent[v] = u;
//             }
//             else if (v != parent[u])
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }
