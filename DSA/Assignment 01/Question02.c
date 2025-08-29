// Q2. Implement a program in C to demonstrate Circular Queue operations (insertion, deletion, display) using arrays. Discuss the advantages of circular queue over linear queue.
#include <stdio.h>
#define SIZE 5

int queue[SIZE], front = -1, rear = -1;

int isFull() {
    return (front == (rear + 1) % SIZE);
}

int isEmpty() {
    return (front == -1);
}

void enqueue(int val) {
    if (isFull()) return;
    if (isEmpty()) front = 0;
    rear = (rear + 1) % SIZE;
    queue[rear] = val;
}

int dequeue() {
    if (isEmpty()) return -1;
    int val = queue[front];
    if (front == rear) front = rear = -1;
    else front = (front + 1) % SIZE;
    return val;
}

void display() {
    if (isEmpty()) return;
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear) break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main() {
    printf("Enqueue 10, 20, 30, 40, 50\n");
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    printf("Current Queue: ");
    display();
    printf("Dequeue two elements\n");
    dequeue();
    dequeue();
    printf("Current Queue: ");
    display();
    printf("Enqueue 60, 70\n");
    enqueue(60);
    enqueue(70);
    printf("Current Queue: ");
    display();
    return 0;
}