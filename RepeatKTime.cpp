#include <iostream>

using namespace std;

int main()
{
    int arr[1000000] = {0};
    int n, max = 0, min = 0, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        arr[v]++;
        if (max <= v)
        {
            max = v;
        }
    }
    cin >> x;
    for (int i = 0; i <= max; i++)
    {
        if (arr[i] == x)
        {
            cout << i << endl;
            return 0;
        }
    }
}