#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*head=NULL;

void push(){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    int data;
    if(newnode==NULL){
        printf("stack is full");
    }
    else{
        printf("Enter data ");
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=head;
        head=newnode;
        printf("Element Pushed\n");
    }
}

void pop(){
    struct node *p;
    p=head;
    if(head==NULL){
        printf("Stack empty\n");
    }
    else{
        int data;
        data=head->data;
        head=head->next;
        free(p);
        printf("%d Popped\n",data);
    }
}

void display(){
    struct node *p;
    p=head;
    if(head==NULL){
        printf("Stack empty\n");
    }
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

int main(){
    push();
    push();
    push();
    push();
    display();
    pop();
    display();
}