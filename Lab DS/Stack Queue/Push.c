#include <stdio.h>
#include <stdlib.h>
int stack[100];
int top=0,i;

void push(p)
{
	if(top<=p)
	{
		printf("Enter the data: ");
		scanf("%d",&stack[top]);
		top++;
	}

	else
		printf("stack is overflow: ");
}

void display(p)
{
	printf(" The elements are:");
	for(i=0;i<top;++i)
		printf("%4d",stack[i]);
}

int main() {
	int a, p;

	printf("How many number enter in the stack: ");
	scanf("%d", &p);

	for(a=1; a<=p; a++)
	{
	push();
	}

	display();


getch();
return 0;
}
