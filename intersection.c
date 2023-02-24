#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter size of set a: ");
    scanf("%d", &n);
    printf("Enter size of set b: ");
    scanf("%d", &m);
    int a[n], b[m], u[n + m];

    printf("Enter elements of set a: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of set b: ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                u[k] = a[i];
                k++;
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        printf("%d ", u[i]);
    }
}