#include<stdio.h>
int main()
{
    int i,left=0,right=6,middle,n,search,arr[100],item;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter %d integers\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter value to find\n");
    scanf("%d",&search);

    while(left<=right)
    {
        middle = (left+right)/2;
        if(arr[middle]==item){
            printf("Item found at index:%d\n",middle);
            return 0;
        }else if(arr[middle]<item){
            left=middle+1;
        }else{
            right=middle-1;
        }
    }
    printf("Item not found\n");
}
