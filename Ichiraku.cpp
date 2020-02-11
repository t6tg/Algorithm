#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>

using namespace std;

int counts = 0;
int sum = 0;

void print(int arr[], int n, vector<long long int> vex, int max)
{
    for (int i = 0; i < n; i++)
    {
        // cout << arr[i] << " ";
        if (arr[i] == 1)
        {
            sum += vex[i];
            if (sum >= max)
            {
                counts++;
                break;
            }
        }
    }
    cout << endl;
    sum = 0;
}
void gen(int n, int arr[], int i, vector<long long int> vex, int max)
{
    if (i == n)
    {
        print(arr, n, vex, max);
        cout << counts << endl;
        return;
    }
    arr[i] = 0;
    gen(n, arr, i + 1, vex, max);
    arr[i] = 1;
    gen(n, arr, i + 1, vex, max);
}

int main()
{
    int n = 0;
    cin >> n;
    int arr[n];
    int max;
    vector<long long int> vex;

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vex.push_back(m);
    }
    cin >> max;
    sort(vex.begin(), vex.end(), greater<long long int>());
    gen(n, arr, 0, vex, max);

    return 0;
}