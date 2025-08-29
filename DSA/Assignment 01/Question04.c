// Q4. Write a program to implement Stack using arrays. Include push, pop, peek and display operations. Test the program with at least 5 stack operations.
#include <stdio.h>
#define MAX 5

int stack[MAX], top = -1;

void push(int val) {
    if (top == MAX - 1) return;
    stack[++top] = val;
}

int pop() {
    if (top == -1) return -1;
    return stack[top--];
}

int peek() {
    if (top == -1) return -1;
    return stack[top];
}

void display() {
    for (int i = top; i >= 0; i--) printf("%d ", stack[i]);
    printf("\n");
}

int main() {
    printf("Push 10, 20, 30 onto stack:\n");
    push(10);
    push(20);
    push(30);
    printf("Current Stack: ");
    display();
    printf("Pop: %d\n", pop());
    printf("Peek: %d\n", peek());
    printf("Push 40, 50, 60 onto stack:\n");
    push(40);
    push(50);
    push(60);
    printf("Current Stack: ");
    display();
    return 0;
}