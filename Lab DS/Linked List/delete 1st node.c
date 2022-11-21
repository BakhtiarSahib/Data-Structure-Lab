#include<stdio.h>
#include<stdlib.h>



struct node{
    int info;
    struct node *next;
};

typedef struct node *nodeptr;// i create a struct type nodeptr

nodeptr makenode(int n){

    nodeptr t;
    t=(nodeptr)malloc(sizeof(struct node));

//    //printf("Address of node info : %d \n", t->info);
//    printf("Address of node : %d \n", t);


    t->info=n;
    t->next=NULL;
//    printf(" %d \n", t->info);
//    //printf("Address of node : %d \n", t);

    return t;

};

void makelist(nodeptr list){
    int i,n,num,s=0;

    printf("How many node ? ");
    scanf("%d",&n);

    for(i=0;i<n;i++){

        scanf("%d",&num);
        list->next=makenode(num);
        list=list->next; //list->next = ptr;
//        s = s+num;
                // call sum function !
    }
  //  printf("Sum is : %d ",s);
}


void delFirst(nodeptr list){
    int dvalue;
    nodeptr t,t1;
    t=list;
    printf("\nDelete a list from first %d: ",t);
    t=list->next;
    printf(" where ? %d ",t);
    t=list->next->next;
    free(list->next);
    printf("\nAddress for delFirst : %d ",list->next=t);

}

void printlist(nodeptr list){
    printf("\n List contains : ");

    while((list->next)!=NULL){

        printf("%5d",list->next->info);

        list=list->next;

    }
}

void main(){
    nodeptr start;
    int z;

    start=(nodeptr)malloc(sizeof(struct node));
  //  printf("\nStarting Address : %d \n",start);

    makelist(start);
    printlist(start);

    delFirst(start);
    printlist(start);

}

