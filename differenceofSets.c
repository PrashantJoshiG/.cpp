#include <stdio.h>
void main()
{
    int n;
    printf("Enter the size of array");
    scanf("%d", &n);
    int a[n];
    int b[n];
    int ans[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the elements of array a");
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter the elements of array b");
        scanf("%d", &b[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int flag = 1;
        for (int j = 0; j < n; j++)
        {
            if (b[j] == a[i])
                flag = 0;
        }

        if (flag)
        {
            ans[count] = a[i];
            count++;
        }
    }

    for (int i = 0; i < count; i++)
    {
        printf("%d  ", ans[i]);
    }
}