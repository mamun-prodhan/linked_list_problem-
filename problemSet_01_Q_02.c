#include<stdio.h>
typedef struct Node node;
struct Node
{
    int value;
    node *next;

};
int main()
{
     node a,b,c;
    a.value=2;
    a.next=&b;
    b.value =3;
    b.next=&c;
    c.value=4;
    c.next=NULL;
    print(&a);
    print(&b);
    print(&c);

    return 0;
}
void print(node *x)
{
    printf("%p %d %p\n\n",x,x->value,x->next);
}

