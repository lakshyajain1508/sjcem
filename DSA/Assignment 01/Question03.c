// Q3. Write a program in C to implement a Priority Queue using arrays. Show how elements are inserted and deleted based on their priority.
#include <stdio.h>
#define MAX 10

int pq[MAX], priority[MAX], n = 0;

void insert(int val, int pr) {
    int i = n - 1;
    while (i >= 0 && priority[i] > pr) {
        pq[i + 1] = pq[i];
        priority[i + 1] = priority[i];
        i--;
    }
    pq[i + 1] = val;
    priority[i + 1] = pr;
    n++;
}

int delete() {
    if (n == 0) return -1;
    int val = pq[0];
    for (int i = 0; i < n - 1; i++) {
        pq[i] = pq[i + 1];
        priority[i] = priority[i + 1];
    }
    n--;
    return val;
}

void display() {
    for (int i = 0; i < n; i++) printf("(%d,%d) ", pq[i], priority[i]);
    printf("\n");
}

int main() {
    insert(10, 2);
    insert(20, 1);
    insert(30, 3);
    display();
    printf("Deleted: %d\n", delete());
    display();
    return 0;
}