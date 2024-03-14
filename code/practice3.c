#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*front,*rear=NULL;

void enqueue(){
    struct node *newnode =(struct node*)malloc(sizeof(struct node));
    int x;
    printf("Enter data ");
    scanf("%d",&x);
    newnode->data=x;
    newnode->next=NULL;
    if(front==NULL){
        front=rear=newnode;
    }
    else{
        
        rear->next=newnode;
        rear=newnode;
       
    }
     printf("Node inserted\n");
}

void dequeue(){
    int x;
    struct node *temp;
    if(front==NULL){
        printf("Queue is empty\n");
    }
    else{
        x=front->data;
        temp=front;
        front=front->next;
        free(temp);
        if(front==NULL){
            rear=NULL;
        }
        printf("Deleted\n");
    }
    
}

void display(){
    struct node *temp;
    temp=front;
    if(front==NULL){
        printf("empty\n");
    }
    else{
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
    printf("\n");
}

int main(){
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();
}