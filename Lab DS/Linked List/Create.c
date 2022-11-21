#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct st{
	int id;
	struct st *link;
};

typedef struct st* ptr;

ptr getnod(void)
{
	ptr p;
	p=(ptr)malloc(sizeof(struct st));
	return p;
}



int main()
{
	int n;

	ptr start,p;
	start=getnod();
	p=start;

    printf("Enter the list :\n");
	while(scanf("%d",&n)==1)
	{
		p->link=getnod();
		p=p->link;
		p->id=n;
	}

	 p->link=0;
	 p=start;

     printf("\nThe list is : ");

	 while(p->link!=0)
	 {
		p=p->link;
		printf("%d\t",p->id);

	 }

getch();
return 0;
}

