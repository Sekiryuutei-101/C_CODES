#include <stdlib.h>
#include <stdio.h>

typedef struct node {
  int data;
  struct node *next;
} Node;

Node *top = NULL;

void push();
int pop();
int peek();
void display();
void stack_operation(int operation);

int main() {
  int operation;

  printf("Enter the operation you want to perform:\n");
  printf("1. Push\n2. Pop\n3. Peek\n4. Display\n");
  scanf("%d", &operation);

  stack_operation(operation);

  return 0;
}

void push() {
  int element;

  printf("Enter the element to push: ");
  scanf("%d", &element);

  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = element;
  newNode->next = top;
  top = newNode;
}

int pop() {
  if (top == NULL) {
    printf("Stack is empty.\n");
    return -1;
  }

  int element = top->data;
  Node *temp = top;
  top = top->next;
  free(temp);
  return element;
}

int peek() {
  if (top == NULL) {
    printf("Stack is empty.\n");
    return -1;
  }

  return top->data;
}

void display() {
  Node *temp = top;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }

  printf("\n");
}

void stack_operation(int operation) {
  switch (operation) {
    case 1:
      // Push an element onto the stack.
      push();
      break;
    case 2:
      // Pop an element from the stack.
      int element = pop();
      if (element != -1) {
        printf("The popped element is %d.\n", element);
      }
      break;
    case 3:
      // Peek at the top element of the stack.
      int topElement = peek();
      if (topElement != -1) {
        printf("The top element of the stack is %d.\n", topElement);
      }
      break;
    case 4:
      // Display the elements of the stack.
      display();
      break;
    default:
      printf("Invalid operation.\n");
  }