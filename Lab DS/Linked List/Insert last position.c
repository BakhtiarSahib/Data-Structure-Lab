#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *next;
};
//typedef struct st *node;

struct node *makenode(int n)
{
	struct node *t;
	t=(struct node *)malloc(sizeof(struct node));
	t->info=n;
	t->next=0;
	return t;

}

void makelist(struct node *list){
    int i,n,num;
    printf("How many number:");
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
    printf("The list contains:");
     while(list->next!=NULL)
         {
            printf("%5d",list->next->info);
            list=list->next;
         }

}

int insertlast(struct node *list)
{

    int n;
    struct node *t;
    printf("Enter the number");
    scanf("%d",&n);
    while(list->next!=0)
    list=list->next;

    list->next=makenode(n);

}




int main()
{
int n;
struct node *list;
list=(struct node*)malloc(sizeof(struct node));
makelist(list);
printlist(list);
	insertlast(list);
	printlist(list);





getch();
return 0;
}
