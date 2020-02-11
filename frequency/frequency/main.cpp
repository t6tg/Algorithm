#include <iostream>
using namespace std;

int main()
{
    int n, v;
    cin >> n;
    int max = 0;
    int *arr = new int[100000000];
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        arr[v]++;
        if (max < v)
        {
            max = v;
        }
    }
    for (int i = 0; i < max; i++)
    {
        if (arr[i] != 0)
        {
            cout << i << " " << arr[i] << endl;
        }
    }
}
