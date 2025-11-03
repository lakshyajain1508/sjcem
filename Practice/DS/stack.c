#include<stdio.h>
#include<stdlib.h>

# define max 5
int stack[max];
int top = -1;

void push(){

    int x;

    if(top==max-1){
        printf("Stack Overflow\n");
    }
    else{
        printf("Enter the element to push:");
        scanf("%d",&x);
        top++;
        stack[top] = x;
        printf("Stored Sucessfully\n");
    }
}

void pop(){
    int y;
    if(top==-1){
        printf("Stack Underflow\n");
    }
    else{
        y = stack[top];
        top--;
        printf("Deleted sucessfully\n");
    }
}

void peek(){
    if(top == -1){
        printf("Stack is empty\n");
    }
    else{
        printf("Top element: %d",stack[top]);
    }
}

void display(){
    if(top == -1){
        printf("Stack is empty\n");
    }
    else{
        printf("Stack elements are: \n");
        for(int i = top; i>=0; i--){
            printf("%d\n", stack[i]);
        }
    }
}

void main(){
    int choice;

    while(choice){
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting the program.\n");
                exit(0);
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

}