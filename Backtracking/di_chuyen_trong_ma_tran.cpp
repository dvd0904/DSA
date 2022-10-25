#include <bits/stdc++.h>
using namespace std;

int M, N, A[100][100], used[100][100], cnt = 0;

void init()
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
            cin >> A[i][j];
    }
}
void Try(int i, int j)
{
    if (i == M - 1 && j == N - 1)
    {
        cnt++;
        return;
    }
    if (i + 1 < M && !used[i + 1][j])
    {
        used[i][j] = 1;
        Try(i + 1, j);
        used[i][j] = 0;
    }
    if (j + 1 < N && !used[i][j + 1])
    {
        used[i][j] = 1;
        Try(i, j + 1);
        used[i][j] = 0;
    }
}
int main()
{
    cin >> M >> N;
    init();
    memset(used, 0, sizeof(used));
    Try(0, 0);
    cout << cnt;
}