#include <stdio.h>

void main()
{
    int n;
    printf("Enter the size of matrix:");
    scanf("%d", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the elements of matrix:");
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0)
                printf("%d ", arr[i][j]);

            else if (i >= 1 && i < n - 1)
            {
                if (i + j < n - 1)
                    printf("  ");

                if (i + j == n - 1)
                    printf("%d", arr[i][j]);
            }

            else
                printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}