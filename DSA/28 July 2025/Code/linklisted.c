#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void showLL(struct Node* head) {
    printf("Linked List: ");
    struct Node *temp = head;
    while(temp != NULL) {
        printf("%d --> ", temp->data);
        temp = temp->next;
    }
    
}

void main(){

    struct Node n1, n2, n3;
    struct Node *head = &n1;
    n1.data = 10;
    n2.data = 20;
    n3.data = 30;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    showLL(head);
    printf("\n");
}