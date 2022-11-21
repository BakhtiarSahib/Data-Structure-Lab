#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int num;
    struct node *next;
} Node, *NodePtr;

void printList(NodePtr np);
NodePtr makeList(void);
NodePtr makeNode(int n);
NodePtr sortList(NodePtr list);

int main(void) {
    NodePtr list;
    printf("Enter numbers for the list (0 to end)\n");
    list = makeList();
    printList(list);
    list = sortList(list);
    printList(list);
    return 0;
}

NodePtr makeList(void) {
    NodePtr makeNode(int), np, top, last;
    int n;
    top = NULL;
    if(scanf("%d", &n) != 1)n = 0;
    while(n != 0) {
        np = makeNode(n);
        if(top == NULL)top = np;
        else last->next = np;
        last = np;
        if(scanf("%d", &n)!=1)n=0;
    }
    return top;
}


void printList(NodePtr np) {
    while(np != NULL) {
        printf("%d\n", np->num);
        np = np->next;
    }
}

NodePtr makeNode(int n) {
    NodePtr np = (NodePtr)malloc(sizeof(Node));
    np->num = n;
    np->next = NULL;
    return np;
}

NodePtr sortList(NodePtr list) {
    NodePtr top = list;
    NodePtr curr = NULL;
    NodePtr largest;
    NodePtr prev;
    prev = NULL;
    curr = top;
    largest = top;

    while(curr != NULL) {
        prev = curr;
        if(curr->num > largest->num) {
            largest = curr;
            prev->next = curr->next;
            largest->next = top;
        }
        curr = curr->next;
    }
    if(prev == NULL) {
        largest->next = top;
        return largest;
    }
    return largest;
}
