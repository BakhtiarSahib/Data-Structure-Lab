#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int stack[50],top=0;
char post[50];

void push(int tmp)
{
 top++;
 stack[top]=(int)(post[tmp]-48);
}

void calculator(char c)
{
 int a,b,ans;
 a=stack[top];
 stack[top]='\0';
 top--;
 b=stack[top];
 stack[top]='\0';
 top--;
 switch(c)
 {
  case '+':
  ans=b+a;
  break;
  case '-':
  ans=b-a;
  break;
  case '*':
  ans=b*a;
  break;
  case '/':
  ans=b/a;
  break;
  case '^':
  ans=b^a;
  break;
  default:
  ans=0;
 }
 top++;
 stack[top]=ans;
}

int main()
{
 int i;

 printf("Insert a Postfix notation: ");
 gets(post);

 for(i=0;i<strlen(post);i++)
 {
  if(post[i]>='0' && post[i]<='9')
  {
   push(i);
  }
  if(post[i]=='+' || post[i]=='-' || post[i]=='*' ||
  post[i]=='/' || post[i]=='^')
  {
   calculator(post[i]);
  }
 }
 printf("\nResult: %d",stack[top]);

getch();
return 0;
}


