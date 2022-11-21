#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};

struct node *makenode(int n)
{
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    t->info=n;
    t->next=0;

    return t;
}

void makelist(struct node *list)
{
    int i,n,num;
    printf("How many node: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&num);
        list->next=makenode(num);
        list=list->next;
    }
}

void printlist(struct node *list)
{
    printf("\n List contains: \n");

    while(list->next!=0)
    {
        printf("%5d", list->next->info);
        list=list->next;
    }
}

void insertlast(struct node *list)
{
    int n;
    struct node *t;
    printf("\n Enter the value: ");
    scanf("%d",&n);

    while(list->next!=0)
    list=list->next;
    list->next=makenode(n);


}

int main()
{
    int n;
    struct node *list;
    list=(struct node *)malloc(sizeof(struct node));

    makelist(list);
    printlist(list);

    insertlast(list);
    printlist(list);

getch();
return 0;
}
