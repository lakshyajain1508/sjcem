#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// Enqueue function
void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue Overflow\n");
    } else {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = value;
        printf("Enqueued: %d\n", value);
    }
}

// Dequeue function
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
    } else {
        printf("Dequeued: %d\n", queue[front]);
        front++;
    }
}

// Display function
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

// Main function to demonstrate the operations
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();

    enqueue(40);
    enqueue(50);
    enqueue(60);  // This will cause overflow
    display();

    return 0;
}
