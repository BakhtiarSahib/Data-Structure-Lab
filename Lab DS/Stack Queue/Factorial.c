#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);;
}

int main()
{
    int n,f;

    printf("Enter the  number: ");
    scanf("%d",&n);

    f=fact(n);

    printf("%d!=%d",n,f);

getch();
return 0;

}
