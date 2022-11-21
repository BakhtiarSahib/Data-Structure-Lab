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
int countlist(struct node *list)
{
    int count=0;
    while(list->next!=0)
    {
        count++;
        list=list->next;
        return count;
    }
}
int insertgivennode(struct node *list,struct node *start)
{

    int n,count,i,p,c;
    struct node *t;
    count=countlist(list);
    printf("Enter the item");
    scanf("%d",&n);//n=item
    c=1;
    while(list!=0 ){
    if(list->info<n){
    c++;
    printf("c=%d",c);

    }
    list=list->next;
    }


    //printf("Enter any position");
    //scanf("%d",&p);
    p=c;
    list=start;
    for(i=1;i<p;i++)
    list=list->next;

    t=makenode(n);
    t->next=list->next;
    list->next=t;
}




int main()
{
int n;
struct node *list,*start;
start=(struct node*)malloc(sizeof(struct node));
list=start;
makelist(list);
printlist(list);
	insertgivennode(list,start);
	printlist(list);





getch();
return 0;
}

