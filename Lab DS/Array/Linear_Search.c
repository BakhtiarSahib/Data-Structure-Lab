#include <stdio.h>
int main()
{
    int a[10], i, item,n;
    printf("\nEnter number of elements of an array:\n");
    scanf("%d",&n);
    printf("\nEnter elements: \n");
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("\nEnter item to search: ");
    scanf("%d", &item);
    for (i=0; i<n; i++)
        if (item == a[i])
        {
            printf("\nItem found at location %d", i+1);
            break;
        }
    if (i ==n)
        printf("\nItem does not exist.");
    return 0;
}
