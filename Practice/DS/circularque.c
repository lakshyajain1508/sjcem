#include <stdio.h>
#include <stdlib.h>
#define max 5

int queue[max];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
        printf("Stored at 1st Position\n");
    }
    else if (((rear + 1) % max) == front)
    {
        printf("Queue is full\n");
    }
    else
    {
        rear = (rear + 1) % max;
        queue[rear] = x;
        printf("Stored Successfully\n");
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue underflow\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
        printf("Queue is now empty\n");
    }
    else
    {
        int y = queue[front];
        front = (front + 1) % max;
        printf("Deleted successfully. Element: %d\n", y);
    }
}

void display()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements are: \n");
        int i = front;
        while (i!=rear)
        {
            printf("%d\n", queue[i]);
            i = (i + 1) % max;
        }
        printf("%d\n", queue[rear]);
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Front element: %d\n", queue[front]);
    }
}

void clearQueue()
{
    front = rear = -1;
    printf("Queue cleared\n");
}

int main()
{
    int choice, x;
    while (1)
    {

        printf("Circular Queue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Clear Queue\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter element to enqueue: ");
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
            clearQueue();
            break;
        case 6:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice, please try again.\n");
        }
    }
}
