// Q8. Write a program to create and perform basic operations (insertion, deletion, traversal) on a Circular Linked List. Explain its advantages over a singly linked list.
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *last = NULL;

void insert(int val) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = val;
    if (!last) {
        newNode->next = newNode;
        last = newNode;
    } else {
        newNode->next = last->next;
        last->next = newNode;
        last = newNode;
    }
    printf("Inserted %d into the list.\n", val);
}

void delete() {
    if (!last) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    struct Node *temp = last->next;
    if (last == temp) {
        printf("Deleted %d from the list.\n", temp->data);
        free(temp);
        last = NULL;
    } else {
        last->next = temp->next;
        printf("Deleted %d from the list.\n", temp->data);
        free(temp);
    }
}

void traverse() {
    if (!last) {
        printf("List is empty.\n");
        return;
    }
    struct Node *temp = last->next;
    printf("List elements: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != last->next);
    printf("\n");
}

int main() {
    int choice, val;
    while (1) {
        printf("\nCircular Singly Linked List Operations:\n");
        printf("1. Insert\n");
        printf("2. Delete (from beginning)\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }
        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                if (scanf("%d", &val) != 1) {
                    printf("Invalid input.\n");
                    while(getchar() != '\n'); // clear input buffer
                    break;
                }
                insert(val);
                break;
            case 2:
                delete();
                break;
            case 3:
                traverse();
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

// Output:
// https://github.com/lakshyajain1508/sjcem/blob/main/DSA/Assignment%2001/Output/Output08.txt