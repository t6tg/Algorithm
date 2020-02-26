#include <stdio.h>
#include <math.h>
int main()
{
    float c = 0, x1, x2, d;
    int i, a;
    scanf("%d", &a);
    float b[a];
    for (i = 0; i < a; i++)
    {
        scanf("%f", &b[i]);
    }
    for (i = 0; i < a; i++)
    {
        x1 += pow(b[i], 2);
        c += b[i];
    }
    x2 = pow(c, 2);
    d = sqrt(((a * x1) - x2) / (a * (a - 1)));
    printf("%.2f", d);

    return 0;
}
