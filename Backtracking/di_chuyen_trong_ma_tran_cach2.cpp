#include <bits/stdc++.h>
using namespace std;

int M, N, A[100][100], cnt = 0;
int res = INT_MAX;
void init()
{
    cin >> M >> N;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
            cin >> A[i][j];
    }
}
void Try(int i, int j, int sum)
{
    if (i == M - 1 && j == N - 1)
    {
        res = min(res, sum);
        return;
    }
    if (i + 1 < M)
    {
        sum += A[i + 1][j];
        Try(i + 1, j, sum);
        sum -= A[i + 1][j];
    }
    if (j + 1 < N)
    {
        sum += A[i][j + 1];
        Try(i, j + 1, sum);
        sum -= A[i][j + 1];
    }
}
int main()
{
    init();
    Try(0, 0, 0);
    cout << cnt;
}