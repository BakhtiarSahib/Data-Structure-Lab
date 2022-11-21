#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct st{
	int id;
	struct st *link;
};

typedef struct st *node;

node getnod(void){
	node p;
	p=(node)malloc(sizeof(struct st));
	return p;
}
int main() {
	int n,item,d=0;

    printf("Enter the item : ");
	scanf("%d",&item);


	node start,ptr;
	start=getnod();
	ptr=start;

    printf("Enter the list :\n");

	while(scanf("%d",&n)==1){
		ptr->link=getnod();
		ptr=ptr->link;
		ptr->id=n;
	}

	ptr->link=0;
    ptr=start;

    while(ptr->link!=0)
    {
          ptr=ptr->link;
          d++;
    }
    if(item==ptr->id)
    {
    printf("Found item and the location is : %d",d);
    }
    else
    printf("Not found");

      ptr=start;
     printf("\nThe list is: ");

        while(ptr->link!=0)
        {
		ptr=ptr->link;

        printf("%4d\t",ptr->id);
        }

getch();
return 0;
}

