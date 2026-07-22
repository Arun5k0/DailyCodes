#include <stdio.h>

int twosum(int a[], int n, int k)
{
    
	for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == k)
            {
                printf("%d %d\n", a[i], a[j]);
                return 1;   // Pair found
            }
        }
    }
    return -1;  // Pair not found
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 9;

    if (twosum(a, n, k) == -1)
    {
        printf("No such pair exists\n");
    }

    return 0;
}
