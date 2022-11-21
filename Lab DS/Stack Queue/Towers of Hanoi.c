#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

void towers(int n, char beg, char aux, char end)
{
    if(n==1)
    {
        printf("\n Move disk 1 from peg %c to peg %c",beg,end);
        return;
    }
    towers(n-1,beg,end,aux);
    printf("\n Move disk %d from peg %c to peg %c",n,beg,end);
    towers(n-1,aux,beg,end);
}

int main()
{
    int n;
    printf("Enter the number of disks : ");
    scanf("%d",&n);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    towers(n,'A','B','C');

getch();
return 0;
}



