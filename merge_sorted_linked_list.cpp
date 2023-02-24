#include <bits/stdc++.h>
using namespace std;


struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};


Node* sortedMerge(Node* head1, Node* head2)  
{  
    Node *h, *p, *q = head1, *r = head2;
    h = (Node*)malloc(sizeof(Node));
    if (head1->data <= head2->data){
        h->data = head1->data;
        h->next = NULL;
        q = head1->next;
    }
    else{
        h->data = head2->data;
        h->next = NULL;
        r = head2->next;
    }
    
    Node* x = h;
    while(q != NULL && r != NULL) {
        p = (Node*)malloc(sizeof(Node));
        if (q->data <= r->data){
            p->data = q->data;
            x->next = p;
            p->next = NULL;
            q = q->next;
            x = p;
        }
        else{
            p->data = r->data;
            x->next = p;
            p->next = NULL;
            r = r->next;
            x = p;
        }
    }
    
    while(q != NULL){
        p = (Node*)malloc(sizeof(Node));
        p->data = q->data;
        x->next = p;
        p->next = NULL;
        q = q->next;
        x = p;
    }
    
    while (r != NULL){
        p = (Node*)malloc(sizeof(Node));
        p->data = r->data;
        x->next = p;
        p->next = NULL;
        r = r->next;
        x = p;
    }
    return h;
}