#include <iostream>
#include <stack>
#define NODE 10000
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

void topo()
{
    stack<int> stk;
    bool vis[10000] = {false};
    for (int i = 0; i <= n; i++)
    {
        if (!vis[i])
        {
            DFS(i, vis, stk);
        }
    }
    while (!stk.empty())
    {
        if (stk.top() == arr[stk.top()])
        {
            cout << stk.top() << " ";
        }
        stk.pop();
    }
}

int main()
{
    int x, y;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        graph[x][y] = 1;
        arr[x] = x;
        arr[y] = y;
    }
    topo();
}