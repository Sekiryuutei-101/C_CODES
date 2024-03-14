#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *array;
};

void create(struct stack *p){
    int size;
    printf("Size of array ");
    scanf("%d",&p->size);
    p->top=-1;
    p->array=(int*)malloc(p->size*sizeof(int));
}

void push(struct stack *p){
    if(p->top==p->size-1){
        printf("Stack Overflow\n");
    }
    else{
        int data;
        printf("Enter data ");
        scanf("%d",&data);
        p->top=p->top+1;
        p->array[p->top]=data;
    }
}

int pop(struct stack *p){
    int x=-1;
    if(p->top==-1){
        printf("Stack empty");
    }
    else{
        
        p->array[p->top--];
        printf("popped\n");
    }
    return x;
}

void peek(struct stack *p){
    if(p->top==-1){
        printf("Stack empty");
    }
    else{
        int data;
        data=p->array[p->top];
        printf("Top most element %d\n",data);
    }
    printf("\n");
}

void display(struct stack *p){
    if(p->top==-1){
        printf("Stack empty\n");
    }
    else{
        for(int i=p->top;i>=0;i--){
             printf("%d ",p->array[i]);
        }
        
    }
    printf("\n");
}

int main(){
    struct stack s;
    create(&s);
    int choice;
    while (choice!=5)
    {
        printf(" 1. Push \n 2. Pop \n 3. Peek \n 4. Display \n 5. Exit\n");
        printf("Enter choice ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            push(&s);
            break;
        case 2:
            pop(&s);
            break;
        case 3:
            peek(&s);
            break;
        case 4:
            display(&s);
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Wrong choice");
            break;
        }
    }
    
}