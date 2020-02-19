#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
struct Node
{
    int value;
    node *next;

};
node *head = NULL;

void print(node *x);
void print_all(node *x);

int main()
{
    node *p = (node)malloc(sizeof(node));
    node *q = (node)malloc(sizeof(node));
    node *r = (node)malloc(sizeof(node));
    node *s = (node)malloc(sizeof(node));


    head = p;

    p->value = 5;
    p->next = q;

    q->value = 6;
    q->next = r;

    r->value = 7;
    r->next = s;

    s->value = 8;
    s->next = NULL;

    printf("Before\n");

    print_all(head);
    pop_back(head);
    printf("\nAfter\n");

    print_all(head);

    print(p);
    print_all(head);

    if(search(head,10)){
        printf("Found\n");
    }
    else{
        printf("Not found\n");
    }



    return 0;
}


void print_all(node *p)

{
    if(p==NULL)
    {

        printf("linked list is empty\n");
        return 0;
    }
    while(p)
    {
        printf("%p\t %d\t %p\n",p,p->value,p->next);
        p = p->next;


    }
}

int search(node *p, int key)
{
    if(p==NULL)
        return 0;

    while(p)
    {
        if(p->value==key)
            return 1;
        p = p->next;
    }
    return 0;
}

void pop_back(node *c)
{

    while(c->next->next != NULL)
    {

        c = c->next;

    }
    free(c->next);
    c->next = NULL;
}
}
