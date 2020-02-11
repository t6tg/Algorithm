#include <iostream>

using namespace std;

int k = 0;

void Counting(int A[], int B[], int n)
{
    int C[k];
    for (int i = 0; i < k + 1; i++)
    {
        C[i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        C[A[i]]++;
    }
    for (int i = 1; i <= k; i++)
    {
        C[i] += C[i - 1];
    }
    for (int i = n; i >= 1; i--)
    {
        B[C[A[i]]] = A[i];
        C[A[i]] = C[A[i]] - 1;
    }
}
int main()
{
    int n;
    cin >> n;
    int A[n], B[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
        if (A[i] > k)
        {
            k = A[i];
        }
    }
    Counting(A, B, n);
    for (int i = 1; i <= n; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;
}