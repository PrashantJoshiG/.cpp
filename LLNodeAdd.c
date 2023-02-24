#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

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

    int loc;
    printf("Enter the location at which you want to add node: ");
    scanf("%d", &loc);

    p = (node *)malloc(sizeof(node));
    printf("Enter data: ");
    scanf("%d", &p->data);
    for(int i = 1; i <= loc-2; i++)
    {
        node *a;
        a = head;
        a = a->next;
        p->next = a->next;
        a->next = p;
    }

    Display(&head);
}