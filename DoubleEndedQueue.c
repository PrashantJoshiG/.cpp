#include <stdio.h>
#include <stdlib.h>
typedef struct deck
{
    int data;
    struct deck *next;
} deck;
void main()
{
    deck *f = NULL, *r = NULL, *p;
    int ch;
    do
    {
        printf("\nEnter your choice");
        printf("\n1:for enqueue at rear \n2:for enqueue at front \n3:for dequeue at front \n4:for dequeue at rear \n5:for display\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (f == NULL && r == NULL)
            {
                f = r = (deck *)malloc(sizeof(deck));
                printf("\nEnter the data: ");
                scanf("%d", &f->data);
                f->next = NULL;
            }
            else
            {
                if (f == r)
                {
                    p = (deck *)malloc(sizeof(deck));
                    printf("\nEnter the data: ");
                    scanf("%d", &p->data);
                    f->next = p;
                    p->next = NULL;
                    r = p;
                }
                else
                {
                    p = (deck *)malloc(sizeof(deck));
                    printf("\nEnter the data: ");
                    scanf("%d", &p->data);
                    r->next = p;
                    p->next = NULL;
                    r = p;
                }
            }
            break;
        case 2:
            if (f == NULL && r == NULL)
            {
                f = r = (deck *)malloc(sizeof(deck));
                printf("\nEnter the data: ");
                scanf("%d", &f->data);
                f->next = NULL;
            }
            else
            {
                if (f == r)
                {
                    p = (deck *)malloc(sizeof(deck));
                    printf("\nEnter the data: ");
                    scanf("%d", &p->data);
                    p->next = f;
                    f->next = NULL;
                    f = p;
                }
                else
                {
                    p = (deck *)malloc(sizeof(deck));
                    printf("\nEnter the data: ");
                    scanf("%d", &p->data);
                    p->next = f;
                    f = p;
                }
            }
            break;
        case 3:
            if (f == NULL && r == NULL)
            {
                printf("\nEmpty List.");
            }
            else
            {
                if (f == r)
                {
                    p = f;
                    printf("\n%d is dequeued.", p->data);
                    free(p);
                    f = NULL;
                    r = NULL;
                }
                else
                {
                    p = f;
                    f = f->next;
                    printf("%d is dequeued.", p->data);
                    free(p);
                }
            }
            break;

        case 4:
            if (f == NULL && r == NULL)
            {
                printf("\nEmpty List.");
            }
            else
            {
                if (f == r)
                {
                    p = f;
                    printf("\n%d is dequeued.", p->data);
                    free(p);
                    f = NULL;
                    r = NULL;
                }
                else
                {
                    p = f;
                    while (p->next != r)
                    {
                        p = p->next;
                    }
                    printf("\n%d is dequeued.", r->data);
                    free(r);
                    r = p;
                    r->next = NULL;
                }
            }
            break;

        case 5:
            p = f;
            while (p != NULL)
            {
                printf("%d ", p->data);
                p = p->next;
            }
            break;

        default:
            printf("\nEnter the correct choice");
            break;
        }
        printf("\nEnter 1 to repeat or 0 to exit:");
        scanf("%d", &ch);
    } while (ch != 0);
}
