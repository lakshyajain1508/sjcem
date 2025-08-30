// Q9. Implement Stack and Queue using Linked List in C. Write separate functions for push, pop (stack) and enqueue, dequeue (queue).
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *stackTop = NULL;
struct Node *queueFront = NULL, *queueRear = NULL;

void push(int val) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = val;
    newNode->next = stackTop;
    stackTop = newNode;
    printf("Pushed %d onto stack.\n", val);
}

int pop() {
    if (!stackTop) {
        printf("Stack is empty.\n");
        return -1;
    }
    int val = stackTop->data;
    struct Node *temp = stackTop;
    stackTop = stackTop->next;
    free(temp);
    printf("Popped %d from stack.\n", val);
    return val;
}

void enqueue(int val) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = val;
    newNode->next = NULL;
    if (!queueRear) {
        queueFront = queueRear = newNode;
    } else {
        queueRear->next = newNode;
        queueRear = newNode;
    }
    printf("Enqueued %d into queue.\n", val);
}

int dequeue() {
    if (!queueFront) {
        printf("Queue is empty.\n");
        return -1;
    }
    int val = queueFront->data;
    struct Node *temp = queueFront;
    queueFront = queueFront->next;
    if (!queueFront) queueRear = NULL;
    free(temp);
    printf("Dequeued %d from queue.\n", val);
    return val;
}

void displayStack() {
    if (!stackTop) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements (top to bottom): ");
    struct Node *temp = stackTop;
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void displayQueue() {
    if (!queueFront) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements (front to rear): ");
    struct Node *temp = queueFront;
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int choice, val;
    while (1) {
        printf("\nStack and Queue Operations:\n");
        printf("1. Push (Stack)\n");
        printf("2. Pop (Stack)\n");
        printf("3. Enqueue (Queue)\n");
        printf("4. Dequeue (Queue)\n");
        printf("5. Display Stack\n");
        printf("6. Display Queue\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }
        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                if (scanf("%d", &val) != 1) {
                    printf("Invalid input.\n");
                    while(getchar() != '\n'); // clear input buffer
                    break;
                }
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                printf("Enter value to enqueue: ");
                if (scanf("%d", &val) != 1) {
                    printf("Invalid input.\n");
                    while(getchar() != '\n');
                    break;
                }
                enqueue(val);
                break;
            case 4:
                dequeue();
                break;
            case 5:
                displayStack();
                break;
            case 6:
                displayQueue();
                break;
            case 7:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

// output:
// https://github.com/lakshyajain1508/sjcem/blob/main/DSA/Assignment%2001/Output/Output09.txt