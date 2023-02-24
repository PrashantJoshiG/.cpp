#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

static void ReverseSLL(node **head)
{
    node *x, *y, *z;
    x = NULL;
    y = *head;
    z = y->next;
    while (y != NULL)
    {
        y->next = x;
        x = y;
        y = z;
        if (z != NULL)
        {
            z = z->next;
        }
    }
    *head = x;
}

void Display(node **head)
{
    node *p;
    p = *head;
    printf("\nList is: ");
    while (p != NULL)
    {
        printf("\n%d", p->data);
        p = p->next;
    }
}

void main()
{
    node *head, *p;
    int ch;

    head = (node *)malloc(sizeof(node));
    printf("Enter data: ");
    scanf("%d", &head->data);
    head->next = NULL;
    p = head;
    printf("\nPress 1 to add node or Press 0 to end: ");
    scanf("%d", &ch);

    while (ch != 0)
    {
        p->next = (node *)malloc(sizeof(node));
        p = p->next;
        printf("\nEnter data: ");
        scanf("%d", &p->data);
        p->next = NULL;
        printf("\nPress 1 to add node or Press 0 to end: ");
        scanf("%d", &ch);
    }
    Display(&head);
    ReverseSLL(&head);
    Display(&head);
}