#include <iostream>
#include <vector>
#define MAX 100000

using namespace std;
int sum = 0;
int n, m;
vector<int> met[MAX];
int degree[MAX];

void insert()
{
    int u, v;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        degree[i] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        met[u].push_back(v);
        degree[u]++;
    }
}

bool visited[MAX];
void initailize()
{
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
}

void DFS(int u)
{
    visited[u] = true;
    cout << u << " ";
    for (int i = 0; i < degree[u]; i++)
    {
        int v = met[u][i];
        if (!visited[v])
        {
            DFS(v);
        }
    }
}

int main()
{
    insert();
    initailize();
    DFS(0);
    //cout << endl << sum << endl;
}
//4 6 0 1 0 2 1 2 2 0 2 3 3 3 2
