    #include<stdio.h>
  
    #include<stdlib.h>
    struct node{
        int data;
        struct node* next;  
    };



    struct node* insertAT(struct node* head, int data){
        struct node* newnode = (struct node*)malloc(sizeof(struct node));
        if(newnode==NULL){
            printf("Memory allocation has failed ");
            return head;
        }
        newnode ->data= data;
        newnode->next=head;
        head = newnode;
        return head;
    }
    void print(struct node* head){
        struct node* ptr = head;
        while(ptr!= NULL){
            printf("%d -> ",ptr->data);
            ptr = ptr->next;
        }
        printf("NULL");
    }
    void main(){
        struct node* head = NULL;
        head = insertAT(head,6);
        head = insertAT(head,5);
        
        printf("The linked list \n");
        print(head);
    }