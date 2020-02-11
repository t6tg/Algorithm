#include <iostream>

using namespace std;

int arr[10000000] = {0};
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "No" << endl;
        return 0;
    }
    int v;
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        arr[v]++;
        if (arr[v] > 1)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}