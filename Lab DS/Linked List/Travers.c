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
{	int n,c=0;
	float sum=0.0,avg=0.0;

	node start,ptr;
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

        printf("\nThe list is : ");

        while(ptr->link!=0)
        {
		ptr=ptr->link;
			c++;
        printf("%d\t",ptr->id);
		sum=sum+ptr->id;

	}
  printf("\nHow many nunber in this list:  %d",c);

  printf("\nThe sum is :  %f",sum);

  avg=(sum/c);
  printf("\nThe avarage is :  %f",avg);

getch();
return 0;
}
