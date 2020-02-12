#include <iostream>

using namespace std;

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int knap(int w, int wt[], int val[], int n)
{
    if (n == 0 || w == 0)
    {
        return 0;
    }
    if (wt[n - 1] > w)
    {
        return knap(w, wt, val, n - 1);
    }
    else
    {
        return max(val[n - 1] + knap(w + wt[n - 1], wt, val, n - 1), knap(w, wt, val, n - 1));
    }
}

int main()
{
    int n, x, y, w;
    cin >> n;
    int val[n];
    int wt[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        val[i] = x;
        wt[i] = y;
    }
    cin >> w;
    cout << knap(w, wt, val, n) << endl;
}