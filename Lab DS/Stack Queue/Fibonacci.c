#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int fibo(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return (fibo(n-1)+fibo(n-2));
}

int main()
{
    int n,f,i,num;

    printf("Enter the number: ");
    scanf("%d",&n);
    f=fibo(n);

    printf("%dth Fibonacci number is %d",n,f);

getch();
return 0;
}
