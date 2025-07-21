#include <stdio.h>
#define MAX 5

int arr[MAX];
int f = -1;
int r = -1;

int isFull() {
    return r == MAX - 1;
}

int isEmpty() {
    return f == -1 || f > r;
}

void enque(int val) {
    if (isFull()) {
        printf("\nQueue is Full. Can't enqueue %d", val);
        return;
    }
    if (f == -1) {
        f = 0;
    }
    r++;
    arr[r] = val;
    printf("\nEnqueued: %d", val);
}

void deque() {
    if (isEmpty()) {
        printf("\nQueue is Empty.");
        return;
    }
    int d = arr[f];
    f++;
    printf("\nDequeued: %d", d);
    if (f > r) {
        f = r = -1;
    }
}

void printQ() {
    if (isEmpty()) {
        printf("\nQueue is Empty.");
        return;
    }
    printf("\nQUEUE:");
    for (int i = f; i <= r; i++) {
        printf(" %d", arr[i]);
    }
}

int main() {
    enque(10);
    enque(20);
    enque(30);
    printQ();
    enque(40);
    enque(100);
    enque(200);
    enque(300);
    enque(400);
    printQ();
    printf("\nRear: %d", r);
    deque();
    printQ();
    deque();
    deque();
    printQ();
    printf("\n");
    return 0;
}
