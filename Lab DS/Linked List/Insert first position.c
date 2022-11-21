#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct st{
	int info;
	struct st *next;
};
//typedef struct st *node;

struct st *makenode(int n)
{
	struct st *t;
	t=(struct st *)malloc(sizeof(struct st));
	t->info=n;
	t->next=0;
	return t;

}

void makelist(struct st *list){
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
void printlist(struct st *list)
{
    printf("The list contains:");
     while(list->next!=NULL)
         {
            printf("%d   ",list->next->info);
            list=list->next;
         }

}

int insertfirst(struct st *list)
{

    int n;
    struct st *t;
    printf("Enter the number");
    scanf("%d",&n);
    t=makenode(n);
    t->next=list->next;
    list->next=t;
}




int main()
{
int n;
struct st *list;
list=(struct st*)malloc(sizeof(struct st));
makelist(list);
printlist(list);
	insertfirst(list);
	printlist(list);





getch();
return 0;
}
