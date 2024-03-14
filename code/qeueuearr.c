#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int front;
    int rear;
    int *array;
};

void create(struct queue *p){
   
    p->front=p->rear=-1;
    int size;
    printf("Enter size of array ");
    scanf("%d",&size);
    p->size=size;
    p->array=(int*)malloc(p->size*sizeof(int));

}

void enqueue(struct queue *p){
    int x;
    
    if(p->rear==p->size-1){
        printf("queue is full\n");
    }
    else{
        printf("Enter data ");
        scanf("%d",&x);
        p->rear=p->rear+1;
        p->array[p->rear]=x;
        printf("inserted\n");
    }
}

void dequeue(struct queue *p) {
    if (p->front == p->rear) {
        printf("Queue is empty\n");
    }
    else {
        int x;
        p->front++;
        x = p->array[p->front];
        printf("%d deleted\n", x);
    }
}

void display(struct queue *p){
    
    if(p->front==p->rear){
        printf("Queue is empty\n");
    }
    else{
        for(int i=p->front+1;i<=p->rear;i++){
            printf("%d ",p->array[i]);
        }
    }
    printf("\n");

}

int main(){
    struct queue p;
    create(&p);
    int choice;
    while(choice!=4){
        printf(" 1. Enqueue \n 2. Dequeue \n 3. Display \n 4. Exit \n");
        printf("Enter choice ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enqueue(&p);
            break;
        case 2:
            dequeue(&p);
            break;
        case 3:
            display(&p);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Wrong choice\n");
            break;
        }
    }
}