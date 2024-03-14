#include<stdio.h>

#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head;
void begininsert();
void lastinsert();
void begin_delete();
void last_delete();
void display();
void search();
void main(){
    int choice =0;
    clrscr();
    while(choice!=6){
        printf("\n1.Insert in begining ");
        printf("\n2.Insert at last");
        printf("\n3.Delete from begining");
        printf("\n4.Delete from last");
        printf("\n5.Show");
        printf("\n6.Exit");
        printf("\nEnter your choice");
        scanf("\n%d",&choice);
        swtich(choice){
            case 1:
            begininsert();
            break;
            case 2:
            lastinsert();
            break;
            case 3:
            begin_delete();
            break;
            case 4:
            last_delete();
            break;
            case 5:
            display();
            break;
            case 6:
            exit(0);
            break;
            default:
            printf("Invalid ");
        }
    }
}
void begininsert(){
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("\nOVERFLOW");
    }
    else{
        printf("\nEnter the node data: ");
        scanf("%d",&item);
        ptr-> data = item;
        if(head== NULL){
            temp=head;
            ptr->next=head;
        }
        else{
            temp = head;
            while(temp->next!= head){
                temp = temp->next;
            }
            ptr->next=head;
            temp->next=ptr;
            head=ptr;
        }
        printf("\nNode inserted\n");
    }
}
void lastinsert(){
   struct node *ptr, *temp;
   int item;
   ptr = (struct node *)malloc(sizeof(struct node));
   if(ptr ==NULL){
    printf("\nOVERFLOW");
   }
   else{
    printf("\nEnter Data: ");
    scanf("%d",&item);
    ptr->data=item;
    if(head==NULL){
        head=ptr;
        ptr->next=head;
    }
    else{
        temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp-> next=ptr;
        ptr->next=head;
    }
    printf("\nNode inserted\n");
   }
}
void begin_delete(){
    struct node *ptr;
    if(head==NULL){
        printf("\nUNDERFLOW");
    }
    else if(head->next==head){
        head=NULL;
        free(head);
        printf("\nNode delete\n");
    }
    else{
        ptr = head;
        while(ptr->next!=head){
            ptr = ptr->next;
        }
        ptr->next=head->next;
        free(head);
        head = ptr->next;
        printf("\nNode deleted\n");
    }
}
void last_delete(){
    struct node *ptr, *preptr;
    if(head==NULL){
        printf("\nUNDERFLOW");
    }
    elseif(head->next==head)
    {
        head==NULL;
        free(head);
        printf9("\nNode deleted\n");
    }
    else{
        ptr = head;
        while(ptr->next!=head){
            preptr=ptr;
            ptr=ptr->next;
        }
        preptr->next=ptr->next;
        free(ptr);
        printf("\nNode deleted\n");
    }
}
void display(){
    struct node *ptr;
    ptr=head;
    if(head==NULL){
        printf("\nNothing to print");
    }
    else{
        printf("\nThe Linked List:");
        while(ptr->next!=head){
            printf("%d\n",ptr->data);
            ptr=ptr->next;
        }
        printf("%d\n,ptr->data");

    }
}