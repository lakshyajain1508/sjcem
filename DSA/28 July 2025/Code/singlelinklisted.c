#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void showLL(struct Node *head) {
    printf("\nLinked List: ");
    struct Node *temp = head;
    if (temp == NULL) {
        printf("Empty\n");
        return;
    }
    while (temp != NULL) {
        printf("%d --> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

struct Node *createNewNode(int d) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = d;
    newNode->next = NULL;
    return newNode;
}

void addNode(struct Node **head, int d, int pos) {
    struct Node *nNode = createNewNode(d);
    
    if (pos == 1) {
        nNode->next = *head;
        *head = nNode;
        return;
    }

    struct Node *temp = *head;
    for (int i = 1; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position. Node not added.\n");
        free(nNode);
        return;
    }

    nNode->next = temp->next;
    temp->next = nNode;
}

void deleteNode(struct Node **head, int pos) {
    if (*head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }

    struct Node *temp = *head;

    if (pos == 1) {
        *head = temp->next;
        free(temp);
        printf("Node deleted successfully.\n");
        return;
    }

    for (int i = 1; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Invalid position, nothing to delete.\n");
        return;
    }

    struct Node *nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    free(nodeToDelete);
    printf("Node deleted successfully.\n");
}

int main() {
    int choice = 0;
    struct Node *head = NULL;
    int d, position;

    while (choice != 4) {
        printf("\n--- Linked List Menu ---\n");
        printf("1: Add Node\n");
        printf("2: Delete Node\n");
        printf("3: Show Linked List\n");
        printf("4: Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to add: ");
                scanf("%d", &d);
                printf("Enter position: ");
                scanf("%d", &position);
                addNode(&head, d, position);
                break;
            case 2:
                printf("Enter position to delete: ");
                scanf("%d", &position);
                deleteNode(&head, position);
                break;
            case 3:
                showLL(head);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    struct Node *current = head;
    while (current != NULL) {
        struct Node *next = current->next;
        free(current);
        current = next;
    }
    head = NULL;

    return 0;
}