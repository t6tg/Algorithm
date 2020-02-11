#include <iostream>
#include <stack>
#define NODE 1000
using namespace std;

int graph[NODE][NODE] = {{0}};
int arr[1000] = {-1};
int n;

void DFS(int u, bool visited[], stack<int> &stk)
{
    visited[u] = true;
    for (int v = 0; v <= n; v++)
    {
        if (graph[u][v])
        {
            if (!visited[v])
            {
                DFS(v, visited, stk);
            }
        }
    }
    stk.push(u);
}