#include <iostream>
#define MAX 100
using namespace std;
int graph[MAX][MAX];
int visited[MAX];
int n;
void create()
{
    cin >> n;
    int e, t, u;
    cin >> e;
    for (int i = 0; i < e; i++)
    {
        cin >> t >> u;
        graph[t][u] = 1;
    }
}
void DFS(int i)
{
    cout << i << " ";
    visited[i] = 1;
    for (int j = 0; j < n; j++)
    {
        if (!visited[j] && graph[i][j] == 1)
        {
            DFS(j);
        }
    }
}
void DFT()
{
    int v;
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }
    cin >> v;
    DFS(v);
}
int main()
{
    create();
    DFT();
}