#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int data;
    struct stack *next;
} stack;

void main()
{
    stack *top = NULL, *p;
    int ch;
    do
    {
        printf("Options:-\n1. PUSH\n2. POP\n3. PEEK\n4. DISPLAY");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1: // PUSH
            p = (stack *)malloc(sizeof(stack));
            printf("\nEnter the data: ");
            scanf("%d", &p->data);

            if (top == NULL)
            {
                top = p;
                top->next = NULL;
            }

            else
            {
                p->next = top;
                top = p;
            }
            break;

        case 2: // POP
            if (top == NULL)
            {
                printf("Empty Stack.");
            }

            else
            {
                p = top;
                if (top->next == NULL)
                {
                    printf("%d is Deleted.", p->data);
                    free(p);
                    top = NULL;
                }

                else
                {
                    top = top->next;
                    printf("%d is Deleted.", p->data);
                    free(p);
                }
            }
            break;

        case 3: // PEEK
            printf("\nTop element of stack is %d.", top->data);
            break;

        case 4: // DISPLAY
            p = top;
            printf("\nStack is:");
            while (p != NULL)
            {

                printf("\n%d", p->data);
                p = p->next;
            }
            break;

        default:
            printf("\nEnter right option.");
            break;
        }
        printf("\nEnter 1 to repeat or 0 to end: ");
        scanf("%d", &ch);

    } while (ch != 0);
}