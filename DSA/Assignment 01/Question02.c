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

/*
Advantages of Circular Queue Over Linear Queue
A circular queue has several advantages over a linear queue:

1. It avoids wasted space by reusing the front area when the queue is full, unlike a linear queue that leaves gaps after dequeuing.
2. It allows for continuous, cyclic processing of data without needing to reset or reorganize the queue.
3. In a circular queue, both enqueue and dequeue operations can happen without leaving unused memory, unlike in a linear queue where memory may be wasted at the front.
4. Both enqueue and dequeue operations are still O (1) but without the need to shift elements, as might happen in a linear queue.
*/