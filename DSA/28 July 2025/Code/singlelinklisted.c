#include <stdio.h>
#include <stdlib.h>
struct Node{
      int data;
      struct Node *next;
};
void showLL(struct Node *head){
      printf("\nLinked List: ");
      struct Node *temp = head;
      while (temp != NULL){
            printf("%d --> ", temp->data);
            temp = temp->next;
      }
}
struct Node *createNewNode(int d){
      struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
      newNode->data = d;
      newNode->next = NULL;
      return newNode;
}

void addNode(struct Node **head, int d, int pos){
      struct Node *nNode = createNewNode(d);
      if (pos == 1){
            nNode->next = *head;
            *head = nNode;
            return;
      }
      struct Node *temp = *head;
      for (int i = 1; temp != NULL && i < pos - 1; i++){
            temp = temp->next;
      }
      if (temp == NULL){
            printf("\n Position is invalid...");
            free(nNode);
            return;
      }

      // we reached just before pos
      nNode->next = temp->next;
      temp->next = nNode;
}
void main(){
      int choice = 0;
      struct Node *head = NULL;
      int d, position;
      while (choice != 4){
            printf("\n Enter choice:\n\t1: Add Node.\n\t2: Delete Node.\n\t3: Show LL:\n\t4: Exit.\n");

            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                  printf("\n Enter value to add:");
                  scanf("%d", &d);
                  printf("\n Enter position:");
                  scanf("%d", &position);
                  addNode(&head, d, position);
                  break;
            case 3:
                  showLL(head);
                  break;
            default:
                  printf("\n Work in progress....");

            } // switch ends
      }
      printf("\n");
}