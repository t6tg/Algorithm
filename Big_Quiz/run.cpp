#include <iostream>
using namespace std;
int main()
{
    int *x = new int[1000000];
    int *arr = new int[700000];
    int *num = new int[1000000];
    int lpp, size, h, m, s, total = 0;
    int name, name2;
    int max = 0, min = 9999999;
    int count = 0;
    cin >> lpp;
    for (int i = 0; i < lpp; i++)
    {
        cin >> name;
        if (max < name)
        {
            max = name;
        }
        arr[name] = name;
    }
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> name2 >> h >> m >> s;
        total = (h * 60) * 60 + (m * 60) + s;
        x[i] = name2;
        num[i] = total;
    }
    for (int i = 0; i < max; i++)
    {
        if (num[i] <= 21600 && num[i] > 0)
        {
            if (x[i] == arr[x[i]])
            {
                count++;
                if (min > num[i])
                {
                    min = x[i];
                }
            }
        }
    }
    if (min == 9999999)
    {
        min = 0;
    }
    cout << min << " " << count << endl;
}
