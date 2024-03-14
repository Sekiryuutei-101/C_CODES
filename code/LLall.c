#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}*head=NULL;
void insertBeg();
void insertLast();
void insertAny();
void delBeg();
void delEnd();
void delAny();
void display();

void insertBeg(){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("Memory Allocation failed \n");
    }
    else{
        int x;
        printf("Enter Value ");
        scanf("%d",&x);
        newnode->data=x;
        newnode->next=head;
        head=newnode;
        printf("Node inserted\n");
    }
    

}

void insertLast(){
    struct node*p;
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    int x;
    if(newnode==NULL){
        printf("Memory allocation has failed\n");
    }
    else{
        printf("Enter value ");
        scanf("%d",&x);
        newnode->data=x;
        if(head == NULL){
            newnode->next=NULL;
            head=newnode;
            printf("Node inserted\n");
        }
        else{
            p=head;
            while(p->next!=NULL){
                p=p->next;
            }
            p->next=newnode;
            newnode->next=NULL;
            printf("Node inserted");
        }
    }
}
void insertAny(){
    struct node *p = (struct node*)malloc(sizeof(struct node));
    struct node *temp=head;
    int loc,data;
    printf("Enter data ");
    scanf("%d",&data);
    printf("Enter location ");
    scanf("%d",&loc);
    p->data=data;
    for(int i=0;i<loc;i++){
        temp=temp->next;
    }
    p->next=temp->next;
    temp->next=p;
    printf("Node inserted\n");
}
void delBeg(){
    struct node *temp;
    int data;
    if(head==NULL){
        printf("List empty\n");
    }
    else{
        temp=head;
        data=temp->data;
        head=temp->next;
        free(temp);
        printf("%d has been deleted",data);
    }
}
void delEnd(){
    struct node *temp,*temp2;
    int data;
    if(head==NULL){
        printf("List empty");
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp2=temp;
            temp=temp->next;
        }
        data=temp->data;
        temp2->next=NULL;
        free(temp);
        printf("%d has been deleted",data);
    }
}

void delAny(){
    struct node *temp,*temp2;
    int pos,data;
    printf("Enter position ");
    scanf("%d",&pos);
    temp=head;
    
    if(head==NULL){
        printf("List is empty");
    }
    else if(head->next==NULL){
        data=head->data;
        head=NULL;
        free(head);
        printf("%d from only node has been deleted\n");
    }
    else{
        for(int i=0;i<pos;i++){
            temp2=temp;
            temp=temp->next;
        }
        data=temp->data;
        temp2->next=temp->next;
        free(temp);
        printf("%d has been deleted",data);
    }
}
void display(){
    struct node *p;
    p=head;
    if(p==NULL){
        printf("Empty\n");
    }
    else{
        while(p!=NULL){
            printf("%d ",p->data);
            p=p->next;
        }
    }
}



int main(){
    int choice;
    
    
    while (choice!=8)
    {
        printf("\n");
        printf(" 1.Insert at Begining \n 2.Insert at end \n 3.Insert at any location \n 4.Delete from begining \n 5.Delete from last \n 6.Delete from any node \n 7.Display\n 8.Exit");
        printf("\nEnter your choice ");
        scanf("%d",&choice);
       switch (choice)
    {
    case 1:
        insertBeg();
        break;
    case 2:
        insertLast();
        break;
    case 3:
        insertAny();
        break;
    case 4:
        delBeg();
        break;
    case 5:
        delEnd();
        break;
    case 6:
        delAny();
        break;
    case 7:
        display();
        break;
    case 8:
        exit(0);
    default:
        printf("Wrong Choice");
        break;
    }
} 
    }
    
    

