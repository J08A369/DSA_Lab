
#include <iostream>
using namespace std;

int main()
{
    int a[] = {6200, 2005, 2, 27, 2026, 1350, 845};
    int len = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < len; i++)
    {
        for (int j = 1; j < len; j++)
        {
            if (a[j] > a[j - 1])
            {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }

    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }
}
