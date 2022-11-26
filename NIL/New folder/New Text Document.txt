
/***    Finding the value of an Arithmetic expression written in Postfix notation    ***/


#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

#define sizeOfStack 100

int stack[sizeOfStack];
int top = -1;

int isEmpty(){
    if(top == -1) return 1;
    else return 0;
}

int isFull(){
    if(top == sizeOfStack - 1) return 1;
    else return 0;
}

void push(int data){
    if(isFull()){
        printf("Stack Overflow\n");
    }
    else{
        top++;
        stack[top] = data;
    }
}

int pop(){
    if(isEmpty()){
        printf("Stack Underflow\n");
    }
    else{
        top--;
        return stack[top + 1];
    }
}

void showStackData(){
    int i;
    for(i = 0; i <= top; i++){
        printf("%d ",stack[i]);
    }
    printf("\n");
}

int isOperator(char symbol){

	if(symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol =='-' || symbol == '%'){
		return 1;
	}
	else{
        return 0;
	}
}

int operation(char symbol,int first,int second){

    switch(symbol)
    {
       case '^':    return pow(first,second);

       case '*':    return first * second;

       case '/':    return first / second;

       case '+':    return first + second;

       case '-':    return first - second;

       case '%':    return first % second;
    }
}

void main(){

    char expression[100],i;

    gets(expression);

    int expressionSize = strlen(expression);

    printf("\n\nSymbol Scanned         Stack's Content\n\n");

    for(i = 0; i < expressionSize; i++){

        char item = expression[i];
        if(item == ' ') continue;

        printf("      %c                       ",item);

        if(isdigit(expression[i])){
            int temp = (int)item;
            temp = temp - 48;
            push(temp);

            showStackData();
        }

        else if(isOperator(item)){

            int second = pop();
            int first = pop();

            int result = operation(item,first,second);

            push(result);
            showStackData();
        }
    }
}
