#include<stdio.h>

typedef struct Node node;
void print(node *x);
void print_all(node *x);

struct Node
{

    int value;
    node *next;

};
node *head =NULL;

int main()
{
    node a,b,c;
    head =&a;
    a.value=2;
    a.next=&b;
    b.value =3;
    b.next=&c;
    c.value=4;
    c.next=NULL;

  print(&a);
  print(&b);
 print(&c);

    print_all(head);
    printf("\n\n");
    print_reverse(head);
    return 0;


}
void print(node *x)
{
    printf(" %p  %d  %p\n\n",x,x->value,x->next);

}
void print_all(node *x)
{
    if(x==NULL)
    {
        printf("List is empty\n");
    }

    while(x!=NULL)
    {


        printf("%d\t",x->value);
        x=x->next;
    }

}
print_reverse(node *x)
{
    if(x==NULL)
    {
        return ;
    }
    else
    {
        print_reverse(x->next);
        printf("%d\t",x->value);
    }
}



