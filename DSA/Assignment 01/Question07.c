// Q7. Implement a Doubly Linked List in C with operations: insertion at beginning, insertion at end, and deletion of a node at a given position. Demonstrate the program with sample input/output.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

struct Node *head = NULL;

void insertBeginning(int val) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = head;
    if (head) head->prev = newNode;
    head = newNode;
    printf("Inserted %d at the beginning.\n", val);
}

void insertEnd(int val) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = val;
    newNode->next = NULL;
    if (!head) {
        newNode->prev = NULL;
        head = newNode;
        printf("Inserted %d as the first element.\n", val);
        return;
    }
    struct Node *temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    printf("Inserted %d at the end.\n", val);
}

void deleteAtPosition(int pos) {
    if (!head) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    struct Node *temp = head;
    int i = 1;
    while (temp && i < pos) {
        temp = temp->next;
        i++;
    }
    if (!temp) {
        printf("Position %d does not exist.\n", pos);
        return;
    }
    if (temp->prev) temp->prev->next = temp->next;
    else head = temp->next;
    if (temp->next) temp->next->prev = temp->prev;
    printf("Deleted element %d at position %d.\n", temp->data, pos);
    free(temp);
}

void display() {
    if (!head) {
        printf("List is empty.\n");
        return;
    }
    struct Node *temp = head;
    printf("List: ");
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int choice, val, pos;
    while (1) {
        printf("\nDoubly Linked List Operations:\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Delete at position\n");
        printf("4. Display list\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }
        switch (choice) {
            case 1:
                printf("Enter value to insert at beginning: ");
                if (scanf("%d", &val) != 1) {
                    printf("Invalid input.\n");
                    while(getchar() != '\n'); // clear input buffer
                    break;
                }
                insertBeginning(val);
                break;
            case 2:
                printf("Enter value to insert at end: ");
                if (scanf("%d", &val) != 1) {
                    printf("Invalid input.\n");
                    while(getchar() != '\n');
                    break;
                }
                insertEnd(val);
                break;
            case 3:
                printf("Enter position to delete: ");
                if (scanf("%d", &pos) != 1) {
                    printf("Invalid input.\n");
                    while(getchar() != '\n');
                    break;
                }
                deleteAtPosition(pos);
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}