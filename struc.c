#include <stdio.h>

struct s
{
    int arr[1000];
};

int main()
{
    struct s s1;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s1.arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (s1.arr[j] > s1.arr[j + 1])
            {
                int temp;
                temp = s1.arr[j];
                s1.arr[j] = s1.arr[j + 1];
                s1.arr[j + 1] = temp;
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", s1.arr[i]);
        }
        puts("");
    }
}