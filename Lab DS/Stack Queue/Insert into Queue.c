#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

int queue_array[50],rear=0,front=0;

insert()
{
    int item;
    if (rear ==50 - 1)
        printf("Queue Overflow \n");
    else
    {
        if (front == 0)
            front =1;
        else
        {
        printf("Inset the element in queue : ");
        scanf("%d", &item);
        rear = rear + 1;
        queue_array[rear] =item;
        }
    }
}

display()
{
    int i;
    if (front ==0)
        printf("Queue is empty \n");
    else
    {
        printf("The Queue is : \n");
        for (i=front; i<=rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}
int main()
{
    int i,n;
    printf("Enter the elements number:");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
        insert();
    display();

getch();
return 0;
}

