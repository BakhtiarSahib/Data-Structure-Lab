#include <stdio.h>

int main()
{
    int array[100], pos, i, size;

    printf("Enter number of elements in array\n");
    scanf("%d", &size);

    printf("Enter %d elements\n", size);



    for ( i = 0 ; i < size ; i++ )
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the position ");
    scanf("%d",&pos);
    for(i=pos-1; i<=size-2; i++)
    {
        array[i]=array[i+1];
    }
    array[size-1]=0;


    for( i = 0 ; i < size ; i++ )
    {
        printf("%d\n", array[i]);
    }
}











