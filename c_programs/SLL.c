#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* createnode(int data){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
void insertnode(struct node** head, int data) {
    struct node* newnode = createnode(data);
    if (*head == NULL) {
        *head = newnode;
        return;
    }
    struct node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
}

void displayList(struct node* head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void deletenode(struct node** head, int value) {
    struct node* temp = *head;
    struct node* prev = NULL;
    if (temp != NULL && temp->data == value) {
        *head = temp->next;
        free(temp);
        printf("Node with value %d deleted.\n", value);
        return;
    }
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Value %d not found in the list.\n", value);
        return;
    }
    prev->next = temp->next;
    free(temp);
    printf("Node with value %d deleted.\n", value);
}
int main() {
    struct node* head = NULL;
    int choice, value;

    do {
        printf("\nMenu:\n");
        printf("1. Insert Node\n");
        printf("2. Display List\n");
        printf("3. Delete Node\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insertnode(&head, value);
                break;
            case 2:
                displayList(head);
                break;
            case 3:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deletenode(&head, value);
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }while(choice!=4);

    return 0;
}