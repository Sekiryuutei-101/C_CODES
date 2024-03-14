#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

 int insertAtEnd(struct node* head, int data){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("Memory allocaiton has failed");
    }
    newnode->data=data;
    newnode->next=NULL;
    if (head==NULL){
        head=newnode;
    }
    else{
            struct node* ptr = head;
            while(ptr->next!=NULL){
                ptr = ptr->next;
            }
            ptr->next=newnode;
    }
    return head;
 }
void print(struct node* head){
    struct node* ptr = head;
    while(ptr!= NULL){
        printf("%d -> ",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}

void main(){
    struct node* head = NULL;
    head = insertAtEnd(head, 8);
        head = insertAtEnd(head, 76);
        head = insertAtEnd(head, 87);

    head = insertAtEnd(head, 9);

    printf("The linked list is\n");
    print(head);
}