#include<stdio.h>
#include<stdlib.h>

# define max 5
int queue[max];
int front = -1;
int rear = -1;

void enqueue(int x){
    if(rear == max-1){
        printf("Queue is full\n");
    }
    else if(front == -1 && rear == -1){
        front = rear = 0;
        queue[rear] = x;
        printf("Stored Successfully\n");
    }
    else{
        rear++;
        queue[rear] = x;
        printf("Stored Successfully\n");
    }
}

void dequeue(){
    
    int y;

    if(front == -1 && rear == -1){
        printf("Queue is empty\n");
    }
    else if(front == rear){
        front = rear = -1;
    }
    else{
        y = queue[front];
        front++;
        printf("Deleted sucessfully. \n");
    }
}

void peek(){
    if(front == -1 && rear == -1){
        printf("Queue is empty\n");
    }
    else{
        printf("Front element: %d\n", queue[front]);
    }
}

void display(){
    if(front == -1 && rear == -1){
        printf("Queue is empty\n");
    }
    else{
        printf("Queue elements are: \n");
        for(int i = front; i < rear + 1; i++){
            printf("%d\n", queue[i]);
        }
    }
}

void main(){
    int choice;

    while(1){
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter the element to enqueue: ");
                int x;
                scanf("%d", &x);
                enqueue(x);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
}