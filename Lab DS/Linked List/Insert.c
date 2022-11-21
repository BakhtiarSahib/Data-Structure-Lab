#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct st{
	int id;
	struct st *link;
};

typedef struct st *node;

node getnod(void)
{
	node p;
	p=(node)malloc(sizeof(struct st));
	return p;
}

int main()
{
	int i,n,m;
	node start,ptr,x;
	start=getnod();
	ptr=start;

    printf("Enter the list :\n");
	while(scanf("%d",&n)==1)
	{
		ptr->link=getnod();
		ptr=ptr->link;
		ptr->id=n;
	}

	 ptr->link=0;
	 ptr=start;

     printf("\nThe list is :\n");

	 while(ptr->link!=0)
	 {
		ptr=ptr->link;
		printf("%4d\t",ptr->id);
	 }

    x=getnod();
	 printf("\nEnter the position to insert: ");
	 scanf("%d",&n);
	 printf("Enter the Value to insert: ");
	 scanf("%d",&m);
	 x->id=m;

	 ptr=start;
	 for(i=0;i<n;i++)
        ptr=ptr->link;

	 x->link=ptr->link;
	 ptr->link=x;


     printf("Enter the list :\n");
	 ptr=start;
	 while(ptr->link!=0)
	 {
		ptr=ptr->link;
		printf("%4d\t",ptr->id);
	 }

getch();
return 0;
}

