#include <stdio.h>

int main()
{
    int array[50], pos, i, size, value;

    printf("Enter number of elements in the array\n");
    scanf("%d", &size);

    printf("Enter %d elements\n", size);

    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);

    printf("Enter the position\n");
    scanf("%d", &pos);

    printf("Please enter the value\n");
    scanf("%d", &value);

    for (i =size; i >= pos; i--)
    {
        array[i] = array[i-1];
    }
    array[pos-1]=value;




    printf("Resultant array is\n");

    for (i = 0; i <size+1; i++)
        printf("%d\n", array[i]);

    return 0;
}
