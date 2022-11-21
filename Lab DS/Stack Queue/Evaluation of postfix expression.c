/*
 ============================================================================
 Name        : Evaluation.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int stack[50];
char post[50];
int top=0;

void pushstack(int tmp)
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

int main(void)
{
 int i;

 printf("Insert a Postfix notation: ");
 gets(post);

 for(i=0;i<strlen(post);i++)
 {
  if(post[i]>='0' && post[i]<='9')
  {
   pushstack(i);
  }
  if(post[i]=='+' || post[i]=='-' || post[i]=='*' ||
  post[i]=='/' || post[i]=='^')
  {
   calculator(post[i]);
  }
 }
 printf("\nResult: %d",stack[top]);

  return EXIT_SUCCESS;
}

