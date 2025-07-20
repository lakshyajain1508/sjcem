#include<stdio.h>
#include<stdlib.h>
int stack[10];
int top;

void push(int x){
    if (top == 9) {
        printf("Stack Overflow...\n");
    } else {
        top++;
        stack[top] = x;
        printf("Value inserted");
    }
}

void pop(int x){
    if (top == -1) {
        printf("Stack Underflow...\n");
    } else {
        x = stack[top];
        top--;
        printf("Deleted value: %d\n", x);
    }
}

void peek(){
    printf("Top element: %d\n", stack[top]);
}

void display(){
    if (top == -1) {
        printf("Stack is empty...\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
    }
}

int main(){
    top = -1;
    int choice, value;

    while (1) {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop(value);
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    }
    return 0;
}