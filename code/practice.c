#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
}*head=NULL;

void create(int a[5]){
    for(int i = 0; i<5;i++){
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        if(newnode == NULL){
            printf("Memory Allocation failed");
        }
        newnode->data = a[i];
        newnode->next=head;
        head = newnode;
    }
}

void insertfirst(int x,struct node **first){
    struct node *p = (struct node*)malloc(sizeof(struct node));
    if(p==NULL){
        printf("Memory allocation failed");
    }
    p->data=x;
    p->next=*first;
    *first = p;
}

void display(struct node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

int main(){
    int a[5]= {2,3,4,5,6};
    create(a);
    int b=9;
    display(head);
    insertfirst(b,&head);
    display(head);

    return 0;
}